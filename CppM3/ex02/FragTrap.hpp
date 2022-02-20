/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 12:11:01 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/29 12:28:00 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	
	private:
	
	public:
		FragTrap(void);
		FragTrap(std::string str_name);
		FragTrap(const FragTrap& other);
		~FragTrap(void);
		FragTrap&	operator = (const FragTrap& other);
		void 		highFivesGuys(void);
};

#endif

