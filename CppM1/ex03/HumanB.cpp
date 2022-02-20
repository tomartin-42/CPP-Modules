/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 08:29:00 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/19 19:21:34 by tommy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	this->set_name(name);
}

void	HumanB::set_name(std::string name)
{
	this->_name = name;
}

std::string	HumanB::get_name(void)
{
	return(this->_name);
}

void	HumanB::setWeapon(Weapon& equip_weapon)
{
	this->b_weapon = &equip_weapon;
}
void	HumanB::attack(void)
{
	std::cout << this->get_name() << " attacks with his ";
	std::cout << b_weapon->getType() << std::endl;
}
