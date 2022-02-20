/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:30:51 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/12 15:35:40 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "conversion.hpp"


int	main(int argc,char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Incorrect num arguments" << std::endl;
		return 1;
	}
	to_char(argv[1]);
	to_int(argv[1]);
	to_float(argv[1]);
	to_double(argv[1]);
	return 0;
}
