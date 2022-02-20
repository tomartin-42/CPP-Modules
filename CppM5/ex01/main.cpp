/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 08:37:39 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/11 08:38:10 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void) {
	try { 
		Bureaucrat	a("Pepe", 130);
		Bureaucrat	b("Luis", 1);
		std::cout << a << std::endl;
		Form		A1("A1", 120, 12);
		std::cout << A1 << std::endl;
		A1.beSigned(b);
		//a.sigForm(A1);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}

