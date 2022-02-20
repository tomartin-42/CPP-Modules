/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 08:37:39 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/11 10:49:52 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


int	main(void) {
	try
	{
		Bureaucrat	a("Pepe", 150);
		Bureaucrat	b("Luis", 1);
		std::cout << a << std::endl;
		ShrubberyCreationForm	A1("A1");
		std::cout << A1 << std::endl;
		//A1.beSigned(b);
		A1.execute(b);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}

