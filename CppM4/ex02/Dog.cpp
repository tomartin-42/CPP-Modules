/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 08:08:04 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/01 20:07:10 by tommy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) {
	std::cout << "Dog default constructor" << std::endl;
	this->setType("Dog");
	this->p_Brain = new Brain();
}

Dog::Dog(const Dog& other) {
	std::cout << "Dog copy constructor" << std::endl;
	this->p_Brain = new Brain();
	this->setType(other.getType());
	*this->p_Brain = *other.p_Brain;
}

Dog::~Dog(void) {
	std::cout << "Dog default destructor" << std::endl;
	delete this->p_Brain;
}

Dog&	Dog::operator = (const Dog& other) {
	this->setType(other.getType());
	*this->p_Brain = *other.p_Brain;
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "The dog said Dog!!!" << std::endl;
}

