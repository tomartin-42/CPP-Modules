/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:33:17 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/26 12:17:26 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const float num) : _raw(roundf(num * (1 << this->f_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int num) : _raw(num << this->f_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed& other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_raw = other.getRawBits();
	return (*this);
}

std::ostream& operator << (std::ostream& out, const Fixed& other)
{
	out << other.toFloat();
	return out;
}

float	Fixed::toFloat(void) const
{
	return((float)this->_raw / (float)(1 << this->f_bits));
}

int		Fixed::toInt(void) const
{
	return(this->_raw / (1 << this->f_bits));
}

int Fixed::getRawBits( void ) const
{
	return (this->_raw);
}

void Fixed::setRawBits ( int const raw )
{
	this->_raw = raw;
}
