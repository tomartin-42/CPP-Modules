/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 09:35:35 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/05 11:48:34 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(void) {
	for(int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	this->operator = (other);
}

MateriaSource::~MateriaSource(void) {
	for(int i = 0; i < 4; i++)
		delete _materia[i];
}

MateriaSource& MateriaSource::operator = (const MateriaSource& other) {
	for(int i = 0; i < 4; i++)
		this->_materia[i] = other._materia[i];
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m) { //OK
	for(int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = m->clone();
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for(int i = 0; i < 4; i++)
	{
		if((this->_materia[i]->getType() == type))
		{
			if (this->_materia[i]->getType() == "ice")
				return (_materia[i]->clone());
			if (this->_materia[i]->getType() == "cure")
				return (_materia[i]->clone());
		}
	}
	return NULL;
}
