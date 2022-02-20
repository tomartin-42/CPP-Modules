/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:17:11 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/11 11:50:47 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& other) {(void)other;}

Intern::~Intern() {}

Intern& Intern::operator = (const Intern& other) {(void)other; return *this;}

int	Intern::selectCase(std::string check) {
	std::string	form[3] = {
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"
	};
	
	for(int i = 0; i < 4; i++)
	{
		if (form[i] == check)
			return i;
	}
	return 3;
}

Form* Intern::makeForm(std::string type, std::string name) {
	switch (this->selectCase(type)) 
	{
		case 0:
			return (new  ShrubberyCreationForm(name));
			break;
		case 1:
			return (new  RobotomyRequestForm(name));
			break;
		case 2:
			return (new  PresidentialPardonForm(name));
			break;
		case 3:
			throw Intern::IncorrectFormException ();
	}
	return NULL;
}
