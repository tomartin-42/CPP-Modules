/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:24:08 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/05 10:42:16 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {

	//Animal	a;
	Cat* one = new Cat();
	Cat* two = new Cat();

	one->setType("Mutant Cat");
	*two = *one;

	delete one;
	std::cout << "=================================" << std::endl;
	std::cout << two->getType() << std::endl;
	std::cout << "=================================" << std::endl;
	delete two;

	int		n_array = 10;
	Animal*	p_Animal[n_array];

	for (int i = 0; i < n_array; i++)
	{
		p_Animal[i] = new Cat();
		p_Animal[++i] = new Dog();
	}

	for (int i = 0; i < n_array; i++)
		delete p_Animal[i];
}
