/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 13:09:48 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/31 08:06:34 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void) {
	std::cout << "DiamondTrap default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string str_name) 
	: ClapTrap(str_name + "_clap_name"), ScavTrap(str_name), 
	FragTrap(str_name){

	DiamondTrap::Name = str_name;
	std::cout	<< DiamondTrap::Name
				<< " DiamondTrap string name constructor" << std::endl; 
	this->setAttr(this->FragTrap::Hitpoints, this->ScavTrap::Energypoints,
			this->ScavTrap::Attackdamage);

}

DiamondTrap::DiamondTrap(const DiamondTrap& other) {

	DiamondTrap::Name = other.getName();
	ClapTrap::Hitpoints = other.getHitpoints();
	ClapTrap::Energypoints = other.getEnergy();
	ClapTrap::Attackdamage = other.getAttack();
	std::cout << DiamondTrap::Name << " DiamondTrap copy constructor" << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << this->Name << " DiamondTrap destructor" << std::endl;
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap& other) {
	this->Name = other.getName();
	ClapTrap::Hitpoints = other.getHitpoints();
	ClapTrap::Energypoints = other.getEnergy();
	ClapTrap::Attackdamage = other.getAttack();
	return (*this);
}

void	DiamondTrap::attack(std::string target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {
	std::cout	<< "Diamond Name " << this->Name << " ClapTrap Name "
				<< this->ClapTrap::getName() << std::endl;
}

void	DiamondTrap::setAttr(int h, int e, int a) {
	ClapTrap::Hitpoints = h;
	ClapTrap::Energypoints = e;
	ClapTrap::Attackdamage = a;
}

void	DiamondTrap::printAttr(void) const {
	ClapTrap::printAttr();
}
