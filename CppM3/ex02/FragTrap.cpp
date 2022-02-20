/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 12:10:00 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/04 16:43:06 by tommy            ###   ########.fr       */
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
	this->Name = other.getName();
	this->Hitpoints = other.getHitpoints();
	this->Energypoints = other.getEnergy();
	this->Attackdamage = other.getAttack();
}


FragTrap::~FragTrap(void) {std::cout << "FragTrap destructor" << std::endl;}

FragTrap& FragTrap::operator = (const FragTrap& other) {
	this->Name = other.getName();
	this->Hitpoints = other.getHitpoints();
	this->Energypoints = other.getEnergy();
	this->Attackdamage = other.getAttack();
	return (*this);
}

void	FragTrap::highFivesGuys(void) {
	std::cout << this->Name << " Give me five!!!" << std::endl;
}

