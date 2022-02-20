/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 08:31:17 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/10 08:15:32 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RRF::RRF() : Form("RRF1", 72, 45) {}

RRF::RRF(std::string target) : Form(target, 72, 45), _target(target) {}

RRF::RRF(const RRF& other) : Form(other), _target(other._target) {}

RRF::~RRF() {}

RRF&	RRF::operator = (const RRF& other) {
	this->_target = other._target;
	return *this;
}

std::string	RRF::getTarget() {
	return this->_target;
}

void	RRF::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	std::cout 	<< "* ZZzzrrrrrrrRRRRRZZZRR!!(Drilling noises) *" << this->_target 
				<< " has been robotomized at 50% of the time." << std::endl;
}
