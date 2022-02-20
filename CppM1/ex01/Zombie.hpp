/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:25:13 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/18 11:29:03 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class	Zombie
{
private:

	std::string	_name;

public:

	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);
	std::string	get_name(void);
	void		set_name(std::string name);
	void		announce(void);
};

#endif
