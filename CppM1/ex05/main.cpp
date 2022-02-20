/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:00:59 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/21 13:07:44 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen	person;

	person.complain("DEBUG");
	person.complain("INFO");
	person.complain("WARNING");
	person.complain("ERROR");
	return (0);
}
