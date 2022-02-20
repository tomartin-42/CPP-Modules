/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 08:37:39 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/11 13:34:11 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void) {

	Bureaucrat	a("Pepe", 1);
	std::cout << a << std::endl;
	a.decrementGrade();
	std::cout << a << std::endl;
	a.incrementGrade();
	std::cout << a << std::endl;
	return 0;
}

