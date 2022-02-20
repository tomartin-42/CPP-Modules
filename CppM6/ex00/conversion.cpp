/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:30:33 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/13 19:41:30 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"
#include <cstdlib>
#include <string>
#include <iostream>

int		nan_select(const char* str)
{
	std::string	nan[6] =
	{
		"nan",
		"nanf",
		"-inf",
		"-inff",
		"+inf",
		"+inff"
	};
	for (int i = 0; i < 6; i++)
	{
		if (std::string(str) == nan[i])
			return i;
	}
	return 6;
}

void	to_char(const char* str) 
{
	double		aux;
	std::string a(str);

	aux = atof(str);
	std::cout << "Char: ";
	if (a.size() == 1 && !isdigit(a[0]))
		std::cout << a[0] << std::endl;
	else if (std::isprint(aux))
		std::cout << static_cast<char>(aux) << std::endl;
	else if (nan_select(str) < 6 || a.size() > 1)
		std::cout << "impossible" << std::endl;
	else
		std::cout << "Non printable" << std::endl;
}

void	to_int(const char* str)
{
	double	aux;
	
	std::cout << "Int: ";
	try
	{	
		aux = std::stoi(str);
		std::cout << static_cast<int>(aux) << std::endl;
	}
	catch (std::invalid_argument&) {std::cout << "impossible" << std::endl;}
	catch (std::out_of_range&) {std::cout << "Non printable" << std::endl;}
}

void	to_float(const char* str)
{
	double	aux;
	
	std::cout << "Float: ";
	try 
	{
		aux = std::stof(str);
		std::cout << static_cast<float>(aux);
		if (static_cast<int>(aux) == aux)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	catch (std::invalid_argument&) {std::cout << "impossible" << std::endl;}
	catch (std::out_of_range&) {std::cout << "Non printable" << std::endl;}
}

void	to_double(const char* str)
{
	double	aux;
	
	std::cout << "Double: ";
	try 
	{
		aux = std::stod(str);
		std::cout << static_cast<double>(aux);
		if (static_cast<int>(aux) == aux)
			std::cout << ".0";
		std::cout << std::endl;
	}
	catch (std::invalid_argument&) {std::cout << "impossible" << std::endl;}
	catch (std::out_of_range&) {std::cout << "Non printable" << std::endl;}
}

