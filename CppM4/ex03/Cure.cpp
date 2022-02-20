/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:13:41 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/05 11:40:57 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(const Cure& other) {
	this->operator = (other);
}

Cure::~Cure(void) {}

Cure&	Cure::operator = (const Cure& other) {
	this->_type = other.getType();
	return *this;
}

AMateria*	Cure::clone(void) const {
	Cure*	newCure = new Cure();
	return newCure;
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
