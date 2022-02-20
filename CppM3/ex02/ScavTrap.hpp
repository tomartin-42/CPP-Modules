/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 12:11:01 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/29 12:11:08 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	
	private:
	
	public:
		ScavTrap(void);
		ScavTrap(std::string str_name);
		ScavTrap(const ScavTrap& other);
		~ScavTrap(void);
		ScavTrap&	operator = (const ScavTrap& other);
		void		guardGate(void) const;
			
};

#endif

