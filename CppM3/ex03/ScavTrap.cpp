/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 12:10:00 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/04 18:24:40 by tommy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) {std::cout << "ScavTrap default constructor" << std::endl;}

ScavTrap::ScavTrap(std::string str_name) : ClapTrap(str_name) {
	std::cout << "ScavTrap name constructor" << std::endl;
	ScavTrap::setAttr(99, 99, 99);
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

void	ScavTrap::setAttr(int h, int e, int a) {
	this->Hitpoints = h;
	this->Energypoints = e;
	this->Attackdamage = a;
	this->ClapTrap::Hitpoints = h;
	this->ClapTrap::Energypoints = e;
	this->ClapTrap::Attackdamage = a;
}

void	ScavTrap::printAttr(void) const{
		std::cout << "Name = " << this->Name << std::endl;
   		std::cout << "Hitpoints = " << this->Hitpoints << std::endl;
		std::cout << "Energypoints = " << this->Energypoints << std::endl;
		std::cout << "Attackdamage = " << this->Attackdamage << std::endl;
		std::cout << "Name CP= " << this->getName() << std::endl;
   		std::cout << "Hitpoints CP= " << this->getHitpoints() << std::endl;
		std::cout << "Energypoints CP= " << this->getEnergy() << std::endl;
		std::cout << "Attackdamage CP= " << this->getAttack() << std::endl;
}
