/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tommy <tommy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:48:50 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/11 11:52:19 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name){
	this->operator=(other);
}

Bureaucrat::Bureaucrat(std::string name, int grade) 
	: _name(name) {
	
	try {
		if (grade < 1)
		{
			this->_grade = 1;
			throw Bureaucrat::GradeTooHighException();
		} 
		else if (grade > 150)
		{
			this->_grade = 150;
			throw Bureaucrat::GradeTooLowException();
		}
		else
			this->_grade = grade;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat&	Bureaucrat::operator = (const Bureaucrat& other) {
	this->_grade = other.getGrade();
	return *this;
}

std::string	Bureaucrat::getName() const {
	return (this->_name);
}

int	Bureaucrat::getGrade() const {
	return (this->_grade);
}

int	Bureaucrat::incrementGrade() {
	try {
		if ((this->getGrade() - 1) < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade--;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return this->getGrade();
}

int	Bureaucrat::decrementGrade() {
	try {
		if ((this->getGrade() + 1) > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade++;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return this->getGrade();
}

void	Bureaucrat::sigForm(Form& form) const {
	try {
		if(form.getSigned() >= this->getGrade())
		{
			form.setSigned(true);
			std::cout	<< this->getName() << " signed " << form.getFName()
						<< std::endl;
		}
		else
		{
			std::cerr	<< this->getName() << " cannot sign " << form.getFName()
		   			<<  " because bureaucrat level is too low." << std::endl; 
			throw Bureaucrat::BureaucratSTDException();
		}
	}
	catch (std::exception& e)
	{
		throw Bureaucrat::BureaucratSTDException();
	}
}

std::ostream&	operator << (std::ostream& out, const Bureaucrat& other) {
	out << other.getName() << ", bureaucrat grade " << other.getGrade();
	return out;
}

void	Bureaucrat::executeForm(Form const & form) const {
	if(form.getGradeExec() < this->getGrade())
	{
		std::cerr 	<< this->getName () << " can not execute " 
					<< form.getFName() << std::endl;
		throw Bureaucrat::GradeTooLowException();
	}
	if (form.getSigned() == false)
	{
		std::cerr 	<< this->getName () << " can not execute by " 
					<< form.getFName() << " form no signed" <<std::endl;
		throw Bureaucrat::FormNoSignedException();
	}
	else
	{
		std::cout	<< this->getName() << " Execut " << form.getFName()
					<< std::endl;
	}
}
