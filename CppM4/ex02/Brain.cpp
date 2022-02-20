/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 07:57:14 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/01 09:16:07 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void) {
	std::cout << "Brain default constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "🤔";
}

Brain::Brain(const Brain& other) {
	std::cout << "Brain copy constructor" << std::endl;
	this->operator = (other);
}

Brain::~Brain(void) {
	std::cout << "Brain destructor" << std::endl;
}

Brain& Brain::operator = (const Brain& other) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return *this;
}
