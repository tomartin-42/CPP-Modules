#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) {
	std::cout << "Dog default constructor" << std::endl;
	setType("Dog");
}

Dog::Dog(const Dog& other) {
	std::cout << "Dog copy constructor" << std::endl;
	this->setType(other.getType());
}

Dog::~Dog(void) {
	std::cout << "Dog default destructor" << std::endl;
}

Dog&	Dog::operator = (const Dog& other) {
	this->setType(other.getType());
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "The dog sai Dog!!!" << std::endl;
}

