/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 09:37:26 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/26 12:22:25 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class	Point{

private:
	Fixed	const x;
	Fixed	const y;

public:
	Point(void);
	Point(const Point& other);
	Point(float xf, float yf);
	~Point(void);

	Point& operator = (const Point& other);

	Fixed	getX(void) const;
	Fixed	getY(void) const;
};
