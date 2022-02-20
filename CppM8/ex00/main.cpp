/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 08:37:12 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/18 08:37:20 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>

int main(void)
{
	std::vector<int>	v(50, 10);

	v[20] = 42;
	try
	{
		easyfind(v, 42);
		easyfind(v, 20);
	}
	catch (const char* a)
	{
		std::cerr << a << std::endl;
		return 1;
	}
	return 0;
}
