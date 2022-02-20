/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 12:11:40 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/04 18:43:27 by tommy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	a("Jonny");
	ScavTrap	b("Murphy");
	FragTrap	c("Wally");
	DiamondTrap d("Tommy");

	a.takeDamage(3);
	b.takeDamage(3);
	c.takeDamage(3);
	d.takeDamage(3);
	d.whoAmI();
	std::cout << "===============================================" << std::endl; 
	b.printAttr();
	std::cout << "===============================================" << std::endl; 
	c.printAttr();
	std::cout << "===============================================" << std::endl; 
	d.printAttr();
	std::cout << "===============================================" << std::endl; 
	a.printAttr();
	std::cout << "===============================================" << std::endl; 
}
