/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:33:17 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/26 12:16:56 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

//Constructors and destruxtors---------------------------------------------//
Fixed::Fixed(void) : _raw(0)
{
}

Fixed::Fixed(const Fixed &other) 
{
	*this = other;
}

Fixed::Fixed(const float num) : _raw(roundf(num * (1 << this->f_bits)))
{
}

Fixed::Fixed(const int num) : _raw(num << this->f_bits)
{
}

Fixed::~Fixed(void)
{
}

//Overcharge operators-----------------------------------------------------//
Fixed&	Fixed::operator = (const Fixed& other)
{
	this->_raw = other.getRawBits();
	return (*this);
}

bool	Fixed::operator > (const Fixed& other)
{
	return (this->getRawBits() > other.getRawBits());
}

bool	Fixed::operator < (const Fixed& other)
{
	return (this->getRawBits() < other.getRawBits());
}

bool	Fixed::operator == (const Fixed& other)
{
	return (this->getRawBits() == other.getRawBits());
}

bool	Fixed::operator != (const Fixed& other)
{
	return (this->getRawBits() != other.getRawBits());
}

bool	Fixed::operator >= (const Fixed& other)
{
	return (this->getRawBits() >= other.getRawBits());
}

bool	Fixed::operator <= (const Fixed& other)
{
	return (this->getRawBits() <= other.getRawBits());
}

std::ostream& operator << (std::ostream& out, const Fixed& other)
{
	out << other.toFloat();
	return out;
}

Fixed	Fixed::operator + (const Fixed& other)
{
	float	aux;
	
	aux = (this->toFloat() + other.toFloat());
	return (Fixed(aux));
}

Fixed	Fixed::operator - (const Fixed& other)
{
	float	aux;
	
	aux = (this->toFloat() - other.toFloat());
	return (Fixed(aux));
}

Fixed	Fixed::operator * (const Fixed& other)
{
	float	aux;
	
	aux = (this->toFloat() * other.toFloat());
	return (Fixed(aux));
}


Fixed	Fixed::operator / (const Fixed& other)
{
	float	aux;
	
	aux = (this->toFloat() / other.toFloat());
	return (Fixed(aux));
}

Fixed&	Fixed::operator ++ (void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator ++ (int)
{
	Fixed	answ(*this);

	this->setRawBits(this->getRawBits() + 1);
	return (answ);
}

Fixed&	Fixed::operator -- (void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator -- (int)
{
	Fixed	answ(*this);

	this->setRawBits(this->getRawBits() - 1);
	return (answ);
}

//Function members--------------------------------------------------------//
float	Fixed::toFloat(void) const
{
	return((float)this->_raw / (float)(1 << this->f_bits));
}

int		Fixed::toInt(void) const
{
	return(this->_raw / (1 << this->f_bits));
}

int Fixed::getRawBits(void) const
{
	return (this->_raw);
}

void Fixed::setRawBits (int const raw)
{
	this->_raw = raw;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.toFloat() > b.toFloat())
		return (b);
	return (a);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return (b);
	return (a);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b) 
{
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}
