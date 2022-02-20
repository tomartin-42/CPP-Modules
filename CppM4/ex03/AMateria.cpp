/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 09:38:53 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/04 08:42:13 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(void) {}

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria(const AMateria& other) {
	this->_type = other.getType();
}

AMateria::~AMateria(void) {}

AMateria&	AMateria::operator = (const AMateria& other) {
	this->_type = other.getType();
	return *this;
}

std::string const & AMateria::getType() const {
	return this->_type;
}

void	AMateria::use(ICharacter& target) {
	std::cout << this->getType() << "Nothing" << std::endl;
};

std::string	AMateria::getType(void) {
	return (this->_type);
}
