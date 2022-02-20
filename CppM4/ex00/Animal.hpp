/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:54:19 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/31 20:06:19 by tommy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <string>

class Animal {
	protected:
		std::string	type;

	public:
		Animal(void);
		Animal(const Animal& other);
		~Animal(void);
		Animal& operator = (const Animal& other);

		std::string		getType(void) const;
		void			setType(std::string a_type);
		virtual void	makeSound(void) const;
};

#endif
