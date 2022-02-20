/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 10:31:45 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/17 08:45:53 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"
#include <iostream>
#include <string>
#include <iomanip>

phone_book::phone_book(void)
{
	this->_index = 0;
	return ;
}

int	phone_book::_get_index(void)
{
	return (this->_index);
}

void	phone_book::_add_index(void)
{
	this->_index++;
}

void	phone_book::new_contact(void)
{
	std::string	str;

	std::cout << "First Name: " << std::endl;
	std::getline(std::cin, str);
	this->_contact[this->_index % 8].set_first_name(str);
	std::cout << "Last Name: " << std::endl;
	std::getline(std::cin, str);
	this->_contact[this->_index % 8].set_last_name(str);
	std::cout << "Nickname: " << std::endl;
	std::getline(std::cin, str);
	this->_contact[this->_index % 8].set_nickname(str);
	std::cout << "Phone: " << std::endl;
	std::getline(std::cin, str);
	this->_contact[this->_index % 8].set_phone(str);
	std::cout << "Darkest Secret: " << std::endl;
	std::getline(std::cin, str);
	this->_contact[this->_index % 8].set_darkest_secret(str);
	this->_add_index();
}

void	phone_book::print_short(std::string str)
{
	if (str.length() >= 10)
		std::cout << "|" << str.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << str;
}

void	phone_book::search_list(void)
{
	int	max = 0;

	if (this->_get_index() > 7)
		max = 8;
	else
		max = this->_get_index();	
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|   Index  |   Name   | Lastname |   Nick   |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < max; i++)
	{
		std::cout << "|" << std::setw(10) << i;
		this->print_short(this->_contact[i].get_first_name());
		this->print_short(this->_contact[i].get_last_name());
		this->print_short(this->_contact[i].get_nickname());
		std::cout << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
	this->select_search();
}

void	phone_book::select_search(void)
{
	int			i;
	std::string	select;

	std::cout << "Please select a contact:" << std::endl;
	std::getline(std::cin, select);
	if (isdigit(select[0]))
		i = atoi(&select[0]);
	else
	{
		std::cerr << "Incorrect selection" << std::endl;
		return ;
	}
	if (i >= this->_get_index() || i > 7 || i < 0)
	   std::cerr << "Empty contact" << std::endl;
	else
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "First Name: " << this->_contact[i].get_first_name() << std::endl;
		std::cout << "Last Name: " << this->_contact[i].get_last_name() << std::endl;
		std::cout << "Nickname: " << this->_contact[i].get_nickname() << std::endl;
		std::cout << "Phone: " << this->_contact[i].get_phone() << std::endl;
		std::cout << "Darkest Secret: " << this->_contact[i].get_darkest_secret() << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
	return ;
}
