/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 09:44:21 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/26 10:16:41 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Point	A(0, 0);
	Point	B(0, 20);
	Point	C(20, 0);
	Point	p_in(2, 2);
	Point	p_out(0, 8);

	std::cout << "p_in is inside ABC triangle? " << bsp(A, B, C, p_in) << std::endl;
	std::cout << "p_out is inside ABC triangle? " << bsp(A, B, C, p_out) << std::endl;
	return 0;
}
