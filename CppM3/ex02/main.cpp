/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 12:11:40 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/04 16:43:46 by tommy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	a("Jonny CT");
	FragTrap	b("Murphy FT");
	FragTrap	c(b);

	a.attack("Murphy");
	b.highFivesGuys();
	a.printAttr();
	b.printAttr();
}

