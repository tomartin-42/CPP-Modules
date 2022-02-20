/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:14:36 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/26 10:16:55 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed{

private:
	int							_raw;
	static const unsigned int	f_bits = 8;

public:
	Fixed(void);
	Fixed(const Fixed& other);
	Fixed(const float num);
	Fixed(const int num);
	~Fixed(void);

	Fixed&	operator = (const Fixed& other);
	bool	operator > (const Fixed& other);
	bool	operator < (const Fixed& other);
	bool	operator == (const Fixed& other);
	bool	operator != (const Fixed& other);
	bool	operator >= (const Fixed& other);
	bool	operator <= (const Fixed& other);
	Fixed	operator + (const Fixed& other);
	Fixed	operator - (const Fixed& other);
	Fixed	operator * (const Fixed& other);
	Fixed	operator / (const Fixed& other);
	Fixed&	operator ++ (void);
	Fixed	operator ++ (int);
	Fixed&	operator -- (void);
	Fixed	operator -- (int);
	
	float			toFloat(void) const;
	int				toInt(void) const;
	int 			getRawBits(void) const;
	void 			setRawBits (int const raw);
	static Fixed	const &min (Fixed const &a, Fixed const &b);
	static Fixed	const &max (Fixed const &a, Fixed const &b);
	static Fixed	&min( Fixed &a, Fixed &b );
	static Fixed	&max( Fixed &a, Fixed &b );

};

	std::ostream& operator<<(std::ostream& out, const Fixed& other);

#endif
