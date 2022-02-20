/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 12:20:29 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/22 12:20:36 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class	Weapon
{
private:

	std::string	_type;

public:

	Weapon(std::string type_weapon);
	Weapon(void);
	std::string&	getType(void);
	void			setType(std::string type);
};

#endif
