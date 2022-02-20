/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 08:29:00 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/22 12:08:10 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &equip_weapon) : a_weapon(equip_weapon)
{
	this->set_name(name);
}

void	HumanA::set_name(std::string name) 
{
	this->_name = name;
}

std::string	HumanA::get_name(void)
{
	return(this->_name);
}

void	HumanA::attack(void)
{
	std::cout << this->get_name() << " attacks with his ";
	std::cout << a_weapon.getType() << std::endl;
}
