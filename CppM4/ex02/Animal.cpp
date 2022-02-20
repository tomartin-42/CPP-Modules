#include "Animal.hpp"
#include <iostream>

Animal::Animal (void) {
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal (const Animal& other) {
	std::cout << "Animal copy constructor" << std::endl;
	this->type = other.type;
}

Animal::~Animal (void) {
	std::cout <<"Animal destructor" << std::endl;
}

Animal&	Animal::operator = (const Animal& other) {
	this->setType(other.getType());
	return *this;
}

Animal::Animal(std::string type) : type(type){
	std::cout << "Animal type constructor" << std::endl;
}

std::string	Animal::getType(void) const {
	return (this->type);
}

void	Animal::setType(std::string a_type) {
	this->type = a_type;
}

void	Animal::makeSound(void) const {
	std::cout << "..." << std::endl;
}
