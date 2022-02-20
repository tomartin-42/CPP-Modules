/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 12:10:00 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/04 18:15:15 by tommy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) {std::cout << "FragTrap default constructor" << std::endl;}

FragTrap::FragTrap(std::string str_name) : ClapTrap(str_name) {
	std::cout << "FragTrap name constructor" << std::endl;
	this->setAttr(100, 100, 30);
}

FragTrap::FragTrap(const FragTrap& other) {
	std::cout << "FragTrap copy constructor" << std::endl;
	this->Name = other.Name;
	this->Hitpoints = other.Hitpoints;
	this->Energypoints = other.Energypoints;
	this->Attackdamage = other.Attackdamage;
}

FragTrap::~FragTrap(void) {std::cout << "FragTrap destructor" << std::endl;}

FragTrap& FragTrap::operator = (const FragTrap& other) {
	this->Name = other.Name;
	this->Hitpoints = other.Hitpoints;
	this->Energypoints = other.Energypoints;
	this->Attackdamage = other.Attackdamage;
	return (*this);
}

void	FragTrap::highFivesGuys(void) {
	std::cout << this->Name << " Give me five!!!" << std::endl;
}

void	FragTrap::setAttr(int h, int e, int a) {
	this->FragTrap::Hitpoints = h;
	this->FragTrap::Energypoints = e;
	this->FragTrap::Attackdamage = a;
	this->ClapTrap::Hitpoints = h;
	this->ClapTrap::Energypoints = e;
	this->ClapTrap::Attackdamage = a;
}

void	FragTrap::printAttr(void) const {
		std::cout << "Name = " << this->Name << std::endl;
   		std::cout << "Hitpoints = " << this->Hitpoints << std::endl;
		std::cout << "Energypoints = " << this->Energypoints << std::endl;
		std::cout << "Attackdamage = " << this->Attackdamage << std::endl;
		std::cout << "Name CP= " << this->getName() << std::endl;
   		std::cout << "Hitpoints CP= " << this->getHitpoints() << std::endl;
		std::cout << "Energypoints CP= " << this->getEnergy() << std::endl;
		std::cout << "Attackdamage CP= " << this->getAttack() << std::endl;
}
