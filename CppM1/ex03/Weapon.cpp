/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 08:17:49 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/19 12:06:47 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type_weapon)
{
	this->setType(type_weapon);
}

Weapon::Weapon(void)
{}

std::string&	Weapon::getType(void)
{
	return(this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
