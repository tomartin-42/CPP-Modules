/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:34:34 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/12 13:21:50 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _f_name("A1"), _f_grade_sign(150), _f_grade_exec(150) {}

Form::Form(std::string name, int grade_sign, int grade_exec)
	: _f_name(name), _f_grade_sign(grade_sign), _f_grade_exec(grade_exec) {
	this->_f_signed = false;
	if (_f_grade_sign < 1 || _f_grade_exec < 1)
		throw Form::GradeTooHighException();
	else if (_f_grade_sign > 150 || _f_grade_exec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& other) 
	: _f_name(other.getFName()), _f_grade_sign(other.getGradeSign()),
	_f_grade_exec(other.getGradeExec()) , _f_signed(other.getSigned()) {}

Form::~Form() {}

Form&	Form::operator = (const Form& other) {
	this->_f_signed = other.getSigned();
	return *this;
}

std::string	Form::getFName(void) const {
	return this->_f_name;
}

int	Form::getGradeSign() const {
	return this->_f_grade_sign;
}

int	Form::getGradeExec() const {
	return this->_f_grade_exec;
}

bool	Form::getSigned() const {
	return this->_f_signed;
}

void	Form::setSigned(bool s) {
	this->_f_signed = s;
}

std::ostream&	operator << (std::ostream& out, const Form& other) {
	out << "Form: " << other.getFName() << std::endl;
	out << "Sign Grade: " << other.getGradeSign() << std::endl;
	out << "Exec Grade: " << other.getGradeExec() << std::endl;
	out << "Signed: " << other.getSigned() << std::endl;
	return out;
}

void	Form::beSigned(const Bureaucrat& worker) {
	try {
		if (this->getGradeSign() < worker.getGrade())
			throw GradeTooHighException();
		else
		{
			this->_f_signed = true;
			worker.sigForm(*this);
		}
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
		worker.sigForm(*this);
	}
}

void	Form::execute(Bureaucrat const & executor) const {
	if (this->getSigned() == false)
	{
		executor.executeForm(*this);
		throw Form::FormNoSignedException();
	}
	if (executor.getGrade() > this->getGradeExec())
	{
		executor.executeForm(*this);
		throw Form::GradeTooHighException();
	}
	else
		executor.executeForm(*this);
}
