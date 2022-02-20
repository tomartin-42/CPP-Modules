/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 12:56:20 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/30 20:28:54 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string	Name;
		
	public:
		DiamondTrap(void);
		DiamondTrap(std::string str_name);
		DiamondTrap(const DiamondTrap& other);
		~DiamondTrap(void);
		DiamondTrap& operator = (const DiamondTrap& other);
		void	attack(std::string target);
		void	whoAmI(void);
		void	setAttr(int h, int e, int a);
		void	printAttr(void) const;
};

#endif
