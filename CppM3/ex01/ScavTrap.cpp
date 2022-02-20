#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) {std::cout << "ScavTrap default constructor" << std::endl;}

ScavTrap::ScavTrap(std::string str_name) : ClapTrap(str_name) {
	std::cout << "ScavTrap name constructor" << std::endl;
	this->setAttr(100, 50, 20);
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	std::cout << "ScavTrap copy constructor" << std::endl;
	this->Name = other.getName();
	this->Hitpoints = other.getHitpoints();
	this->Energypoints = other.getEnergy();
	this->Attackdamage = other.getAttack();
}


ScavTrap::~ScavTrap(void) {std::cout << "ScavTrap destructor" << std::endl;}

ScavTrap& ScavTrap::operator = (const ScavTrap& other) {
	this->Name = other.getName();
	this->Hitpoints = other.getHitpoints();
	this->Energypoints = other.getEnergy();
	this->Attackdamage = other.getAttack();
	return (*this);
}

void	ScavTrap::guardGate(void) const{
	std::cout << this->Name << " went into gate keeper mode" << std::endl;
}

