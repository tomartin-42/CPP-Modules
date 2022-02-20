/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 08:57:51 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/11 09:04:56 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;

class Form {
	private:
		std::string	const _f_name;
		int			const _f_grade_sign;
		int			const _f_grade_exec;
		bool		_f_signed;
	
	public:
		Form();
		Form(std::string name, int grade_sign, int grade_exec);
		Form(const Form& other);
		~Form();
		Form& operator = (const Form& other);

		std::string	getFName() const;
		int		getGradeSign() const;
		int		getGradeExec() const;
		bool	getSigned() const;
		void	setSigned(bool s);

		void	beSigned (const Bureaucrat& worker);
		virtual	void	execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::exception {
			public:
			const char* what() const throw() {
				return "🚨  Form grade too high!!!!!!! 🚨";
			}
		};

		class GradeTooLowException : public std::exception {
			public:
			const char* what() const throw() {
				return "🚨  Form grade too low!!!!!!! 🚨";
			}
		};

		class FormNoSignedException : public std::exception {
			public:
			const char* what() const throw() {
				return "🚨  Form no siged. Can not execut!!!!!!! 🚨";
			}
		};
};

std::ostream& operator << (std::ostream& out, const Form& other);

#endif
