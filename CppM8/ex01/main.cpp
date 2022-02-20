/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 08:42:15 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/19 11:58:52 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span		bigSpam (10000);
	std::vector<int>	aux;

	for (int i = 0; i < 10000; i++)
		aux.push_back(i + 1);
	try
	{
		bigSpam.addNumber(aux.begin(), aux.end());
		std::cout << bigSpam.shortestSpan() << std::endl;
		std::cout << bigSpam.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
