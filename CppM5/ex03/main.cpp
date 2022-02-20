/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 08:37:39 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/11 11:51:01 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void) {
	Intern someRandomIntern;
	Form* rrf;
	try { 
		rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	try
	{
		Bureaucrat	a("Pepe", 150);
		Bureaucrat	b("Luis", 1);
		std::cout << a << std::endl;
		ShrubberyCreationForm	A1("A1");
		std::cout << A1 << std::endl;
		rrf->beSigned(b);
		rrf->execute(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	delete rrf;
	return 0;
}

