/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:00:59 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/21 15:48:59 by tommy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen		person;

	if (argc != 2)
	{
		std::cerr << "Incorrect num arguments" << std::endl;
		return (42);
	}
	std::string arg(argv[1]);
	person.complain(arg);
	return (0);
}
