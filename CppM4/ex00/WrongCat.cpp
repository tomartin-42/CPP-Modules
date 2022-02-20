#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void) {
	std::cout << "WrongCat default constructor" << std::endl;
	setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat& other) {
	std::cout << "WrongCat copy constructor" << std::endl;
	this->setType(other.getType());
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat default destructor" << std::endl;
}

WrongCat&	WrongCat::operator = (const WrongCat& other) {
	this->setType(other.getType());
	return *this;
}

void	WrongCat::makeSound(void) const {
	std::cout << "The cat sai WrongCat!!!" << std::endl;
}
