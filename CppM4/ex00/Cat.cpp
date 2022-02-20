#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) {
	std::cout << "Cat default constructor" << std::endl;
	setType("Cat");
}

Cat::Cat(const Cat& other) {
	std::cout << "Cat copy constructor" << std::endl;
	this->setType(other.getType());
}

Cat::~Cat(void) {
	std::cout << "Cat default destructor" << std::endl;
}

Cat&	Cat::operator = (const Cat& other) {
	this->setType(other.getType());
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "The cat sai Cat!!!" << std::endl;
}
