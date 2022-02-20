/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 07:51:34 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/18 07:52:03 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void	plus(T& num)
{
	num = num + 1;
}

int	main(void)
{
	int	x[10];

	for (int i = 0; i < 10; i++)
	{
		x[i] = i;
		std::cout << x[i] << std::endl;
	}
	iter(x, 10, &plus);
	std::cout << "============================================" << std::endl;
	std::cout << "============================================" << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << x[i] << std::endl;

	return 0;
}
