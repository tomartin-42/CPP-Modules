/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 12:11:01 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/30 20:40:31 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	
	private:

	protected:
		int			Hitpoints;
		int			Energypoints;
		int			Attackdamage;
	
	public:
		FragTrap(void);
		FragTrap(std::string str_name);
		FragTrap(const FragTrap& other);
		~FragTrap(void);
		FragTrap&		operator = (const FragTrap& other);
		void 	highFivesGuys(void);
		virtual void	setAttr(int h, int e, int a);
		void	printAttr(void) const;
};

#endif
