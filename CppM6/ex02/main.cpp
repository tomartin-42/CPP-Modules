/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 09:23:40 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/15 11:53:45 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "Types.hpp"
#include <cstdlib>
#include <iostream>

Base* generate(void) 
{
	switch (rand() % 3)
	{
		case 0:
			std::cout << "A Class generated" << std::endl;
			return (new A());
			break;
		case 1:
			std::cout << "B Class generated" << std::endl;
			return (new B());
			break;
		case 2:
			std::cout << "C Class generated" << std::endl;
			return (new C());
			break;
	}
	return NULL;
}

void identify(Base* p)
{
		if(dynamic_cast<A *>(p))
			std::cout << "Is A objet" << std::endl;
		else if(dynamic_cast<B *>(p))
			std::cout << "Is B objet" << std::endl;
		else if(dynamic_cast<C *>(p))
			std::cout << "Is C objet" << std::endl;
}	

void identify(Base& p)
{
	try
	{
		A a = dynamic_cast<A &>(p);
		std::cout << "Is A& objet" << std::endl;
	}
	catch (std::bad_cast& p)
	{}
	try
	{
		B b = dynamic_cast<B &>(p);
		std::cout << "Is B& objet" << std::endl;
	}
	catch (std::bad_cast& p)
	{}
	try
	{
		C c = dynamic_cast<C &>(p);
		std::cout << "Is C& objet" << std::endl;
	}
	catch (std::bad_cast& p)
	{}
}

int	main(void)
{
	Base*	type;

	srand (time(NULL));
	type = generate();
	identify(type);
	identify(*type);

	delete type;
	return 0;
}	

