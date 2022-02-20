/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:11:06 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/18 11:38:36 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string);
void	randomChump(std::string);

int	main(void)
{
	Zombie	n_Zombie("Normal");
	Zombie*	p_Zombie;

	p_Zombie = newZombie("Puntero");
	randomChump("Random");
	delete p_Zombie;
	return (0);
}
