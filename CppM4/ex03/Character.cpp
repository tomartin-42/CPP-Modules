/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 08:04:40 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/04 10:57:22 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(void) {
	for (int i = 0; i < 4; i++)
		this->_equip[i] = NULL;
}

Character::Character(std::string str_name) : _name(str_name) {
	for (int i = 0; i < 4; i++)
		this->_equip[i] = NULL;
}

Character::Character(const ICharacter& other) {this->operator = (other);}

Character::~Character(void) {
	for(int i = 0; i < 0; i++)
		delete this->_equip[i];
}

Character&	Character::operator = (const Character& other) {
	for (int i = 0; i < 4; i++)
		this->_equip[i] = this->_equip[i];
	return *this;
}

std::string const & Character::getName() const {
	return this->_name;
}

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++)
	{
		if (this->_equip[i] == NULL)
		{
			this->_equip[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3)
		this->_equip[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {
	if ((idx < 4 && idx >= 0) && this->_equip[idx] != NULL)
		this->_equip[idx]->use(target);
}
