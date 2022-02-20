/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 12:17:39 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/22 12:17:41 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR;
	std::string&	stringREF = str;

	stringPTR = &str;
	std::cout << "mem address str = " << &str << std::endl;
	std::cout << "mem address assing to stringPTR = " << stringPTR << std::endl;
	std::cout << "men address assing to stringREF = " << &stringREF << std::endl;
	std::cout << "the string is = " << str << std::endl;
	std::cout << "string in stringPTR = " << *stringPTR << std::endl;
	std::cout << "string in stringREF = " << stringREF << std::endl;
	return(0);
}

