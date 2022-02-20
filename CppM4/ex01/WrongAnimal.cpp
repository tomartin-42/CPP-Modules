#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal (void) {
	std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal (const WrongAnimal& other) {
	std::cout << "WrongAnimal copy constructor" << std::endl;
	this->type = other.type;
}

WrongAnimal::~WrongAnimal (void) {
	std::cout <<"WrongAnimal destructor" << std::endl;
}

WrongAnimal&	WrongAnimal::operator = (const WrongAnimal& other) {
	this->type = other.type;
	return *this;
}

std::string	WrongAnimal::getType(void) const {
	return (this->type);
}

void	WrongAnimal::setType(std::string a_type) {
	this->type = a_type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "...Wrong" << std::endl;
}
