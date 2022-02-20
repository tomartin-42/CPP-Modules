/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 08:18:34 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/14 08:38:41 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <iostream>

struct	Data {int a;};

uintptr_t serialize(Data* ptr) {return reinterpret_cast<uintptr_t>(ptr);}

Data* deserialize(uintptr_t raw) {return reinterpret_cast<Data*>(raw);}

int main ( void )
{
	Data 		alfa;
	Data*		alfa_p;
	uintptr_t	conversion;

	alfa.a = 666;
	
	conversion = serialize(&alfa);

	alfa_p = deserialize(conversion);

	std::cout << alfa_p->a << std::endl;
	std::cout << alfa_p << std::endl;
	std::cout << &alfa << std::endl;

	return 0;
}
