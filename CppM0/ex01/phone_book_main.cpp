/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book_main.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:08:57 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/17 08:51:37 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"
#include <iostream>
#include <cstdlib>

void	menu(void)
{
	std::cout << "-------------------------------" << std::endl;
	std::cout << "ADD -> add a contact" << std::endl;
	std::cout << "SEARCH -> to find a contact" << std::endl;
	std::cout << "EXIT -> to exit phone book" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "Please select a option: " << std::endl;
}

int	main(void)
{
	phone_book	p_b;
	std::string		selection;

	system("clear");
	menu();
	while (std::getline(std::cin, selection))
	{
		if (!selection.compare("EXIT"))
			return (0);
		else if (!selection.compare("ADD"))
		{
			p_b.new_contact();
			menu();
		}
		else if (!selection.compare("SEARCH"))
		{
			p_b.search_list();
			menu();
		}
		else
		{
			system("clear");
			menu();
		}
	}
	return (0);
}
