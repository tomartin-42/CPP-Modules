/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 08:07:57 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/01 19:34:29 by tommy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) {
	std::cout << "Cat default constructor" << std::endl;
	setType("Cat");
	this->p_Brain = new Brain();
}

Cat::Cat(const Cat& other) {
	std::cout << "Cat copy constructor" << std::endl;
	this->p_Brain = new Brain();
	this->setType(other.getType());
	*this->p_Brain = *other.p_Brain;
}

Cat::~Cat(void) {
	std::cout << "Cat default destructor" << std::endl;
	delete this->p_Brain;
}

Cat&	Cat::operator = (const Cat& other) {
	this->Animal::setType(other.getType());
	*this->p_Brain = *other.p_Brain;
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "The cat said Cat!!!" << std::endl;
}
