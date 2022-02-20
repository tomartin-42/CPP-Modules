/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 08:31:17 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/10 08:17:36 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PPF::PPF() : Form("PPF1", 25, 5) {}

PPF::PPF(std::string target) : Form(target, 25, 5), _target(target) {}

PPF::PPF(const PPF& other) : Form(other), _target(other._target) {}

PPF::~PPF() {}

PPF&	PPF::operator = (const PPF& other) {
	this->_target = other._target;
	return *this;
}

std::string	PPF::getTarget() {
	return this->_target;
}

void	PPF::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	std::cout	<< this->_target << " has been pardoned by Zafod Beeblebrox."
				<< std::endl;
}
