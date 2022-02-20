/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 12:11:01 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/30 20:40:34 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	
	private:
	
	protected:
		int			Hitpoints;
		int			Energypoints;
		int			Attackdamage;
	
	public:
		ScavTrap(void);
		ScavTrap(std::string str_name);
		ScavTrap(const ScavTrap& other);
		~ScavTrap(void);
		ScavTrap&	operator = (const ScavTrap& other);
		void			guardGate(void) const;
		virtual void 	setAttr(int h, int e, int a);
		void	printAttr(void) const;
};

#endif
