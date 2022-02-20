/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:13:41 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/04 09:08:38 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(const Ice& other) {
	this->operator = (other);
}

Ice::~Ice(void) {}

Ice&	Ice::operator = (const Ice& other) {
	this->_type = other.getType();
	return *this;
}

AMateria*	Ice::clone(void) const {
	Ice*	newIce = new Ice();
	return newIce;
}

void	Ice::use(ICharacter& target) {
	std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
