/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:14:36 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/27 08:36:16 by tomartin         ###   ########.fr       */
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

	Fixed& operator=(const Fixed& other);
	
	float	toFloat(void) const;
	int		toInt(void) const;
	int 	getRawBits( void ) const;
	void 	setRawBits ( int const raw );
};

	std::ostream& operator<<(std::ostream& out, const Fixed& other);

#endif
