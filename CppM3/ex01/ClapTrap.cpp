#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) {
	this-> setAttr(10, 10, 0);
	std::cout << "ClapTrap default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string str_name) : Name(str_name) {
	this-> setAttr(10, 10, 0);
	std::cout << "ClapTrap string constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	this->Name = other.getName();
	this->Hitpoints = other.getHitpoints();
	this->Energypoints = other.getEnergy();
	this->Attackdamage = other.getAttack();
	std::cout << "ClapTrap copy constructor" << std::endl;
}

ClapTrap::~ClapTrap(void) { std::cout << "ClapTrap destructor" << std::endl; }

ClapTrap&	ClapTrap::operator = (const ClapTrap& other) {
	this->Name = other.Name;
	this->Hitpoints = other.Hitpoints;
	this->Energypoints = other.Energypoints;
	this->Attackdamage = other.Attackdamage;
	return (*this);
}

void ClapTrap::attack(std::string const &target) {
	std::cout	<< "ClapTrap " << this->Name << " attack " << target
				<< ", causing " << this->Attackdamage << " points of damage." 
				<< std::endl;
	this->Energypoints -= 3;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout	<< "ClapTrap " << this->Name << " take " << amount 
				<< " hitpoinst." << std::endl;
	this->Hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout	<< "ClapTrap " << this->Name << " was repaired " << amount 
				<< " hitpoinst." << std::endl;
	this->Hitpoints += amount;
}

//======================GET / SET==============================//

std::string	ClapTrap::getName(void) const {
	return(this->Name);
}

int	ClapTrap::getHitpoints(void) const {
	return(this->Hitpoints);
}

int ClapTrap::getEnergy(void) const {
	return(this->Energypoints);
}

int	ClapTrap::getAttack(void) const {
	return(this->Attackdamage);
}

void	ClapTrap::printAttr(void) const {
		std::cout << "Name = " << this->Name << std::endl;
   		std::cout << "Hitpoints = " << this->Hitpoints << std::endl;
		std::cout << "Energypoints = " << this->Energypoints << std::endl;
		std::cout << "Attackdamage = " << this->Attackdamage << std::endl;
}

void	ClapTrap::setName(std::string str_name) {
	this->Name = str_name;
}

void	ClapTrap::setHitpoints(int num) {
	this->Hitpoints = num;
}

void	ClapTrap::setEnergy(int num) {
	this->Energypoints = num;
}

void	ClapTrap::setAttack(int num) {
	this->Attackdamage = num;
}

void	ClapTrap::setAttr(int h, int e, int a) {
	this->setHitpoints(h);
	this->setEnergy(e);
	this->setAttack(a);
}

