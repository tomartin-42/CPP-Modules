/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:39:55 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/07 14:48:39 by tommy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

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

		class GradeTooHighException : public std::exception {
			public:
			const char* what() const throw() {
				return "🚨  grade too high!!!!!!! 🚨";
			}
		};

		class GradeTooLowException : public std::exception {
			public:
			const char* what() const throw() {
				return "🚨  grade too low!!!!!!! 🚨";
			}
		};
};

std::ostream& operator << (std::ostream& out, const Bureaucrat& other);

#endif
