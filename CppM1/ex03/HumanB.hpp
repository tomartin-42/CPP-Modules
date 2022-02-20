/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 08:22:24 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/19 21:21:15 by tommy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
private:
	std::string	_name;
	Weapon*		b_weapon;

public:
	HumanB(std::string name);
	void		set_name(std::string name);
	std::string get_name(void);
	void		setWeapon(Weapon& equip_weapon);
	void		attack(void);
};

#endif
