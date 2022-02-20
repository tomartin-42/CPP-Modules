/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:14:36 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/23 16:23:27 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed{

private:
	int					_raw;
	static const int	f_bits = 8;

public:
	Fixed(void);
	Fixed(const Fixed &other);
	~Fixed(void);
	Fixed& operator=(const Fixed &other);
	int getRawBits( void ) const;
	void setRawBits ( int const raw );
};

#endif
