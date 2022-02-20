/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 08:22:24 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/22 11:25:40 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{
private:
	std::string	_name;
	Weapon&		a_weapon;

public:
	HumanA(std::string name, Weapon &equip_weapon);
	void		set_name(std::string name);
	std::string get_name(void);
	void		attack(void);
};

#endif
