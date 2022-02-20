/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 12:10:00 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/29 12:10:14 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) {std::cout << "ScavTrap default constructor" << std::endl;}

ScavTrap::ScavTrap(std::string str_name) : ClapTrap(str_name) {
	std::cout << "ScavTrap name constructor" << std::endl;
	this->setAttr(100, 50, 20);
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	std::cout << "ScavTrap copy constructor" << std::endl;
	this->Name = other.Name;
	this->Hitpoints = other.Hitpoints;
	this->Energypoints = other.Energypoints;
	this->Attackdamage = other.Attackdamage;
}


ScavTrap::~ScavTrap(void) {std::cout << "ScavTrap destructor" << std::endl;}

ScavTrap& ScavTrap::operator = (const ScavTrap& other) {
	this->Name = other.Name;
	this->Hitpoints = other.Hitpoints;
	this->Energypoints = other.Energypoints;
	this->Attackdamage = other.Attackdamage;
	return (*this);
}

void	ScavTrap::guardGate(void) const{
	std::cout << this->Name << " went into gate keeper mode" << std::endl;
}

