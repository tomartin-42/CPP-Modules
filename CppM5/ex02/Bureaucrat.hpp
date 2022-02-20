/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:39:55 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/11 10:55:14 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		std::string const	_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		virtual ~Bureaucrat();
		Bureaucrat&	operator = (const Bureaucrat& other);

		std::string	getName() const;
		int			getGrade() const;

		int			incrementGrade();
		int			decrementGrade();

		void		sigForm(Form& form) const;
		void		executeForm(Form const & form) const;

		class GradeTooHighException : public std::exception {
			public:
			const char* what() const throw() {
				return "🚨  Bureaucrat grade too high!!!!!!! 🚨";
			}
		};

		class GradeTooLowException : public std::exception {
			public:
			const char* what() const throw() {
				return "🚨  Bureaucrat grade too low!!!!!!! 🚨";
			}
		};
		
		class FormNoSignedException : public std::exception {
			public:
			const char* what() const throw() {
				return "🚨  Form no signed !!!!!!! 🚨";
			}
		};

		class BureaucratSTDException : public std::exception {
			public:
			const char* what() const throw() {
				return "🚨🚨🚨" ;
			}
		};
};

std::ostream& operator << (std::ostream& out, const Bureaucrat& other);

#endif
