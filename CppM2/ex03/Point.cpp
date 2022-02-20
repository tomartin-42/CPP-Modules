/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 09:37:23 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/26 12:22:14 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

Point::Point(void) : x(0), y(0) {}
Point::Point(const Point& other) : x(other.x), y(other.y) {}
Point::Point(float xf, float yf) : x(xf), y(yf) {}
Point::~Point(void) {}

Point& Point::operator = (const Point& other)
{
    if (this != &other)
	{
		const_cast<Fixed&>(x) = other.x;
		const_cast<Fixed&>(y) = other.y;
    }
    return *this;
}

Fixed	Point::getX(void) const
{
	return this->x;
}

Fixed	Point::getY(void) const
{
	return this->y;
}
