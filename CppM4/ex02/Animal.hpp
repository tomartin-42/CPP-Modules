/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:54:19 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/05 10:49:36 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal {
	protected:
		std::string	type;

	public:
		Animal(void);
		Animal(const Animal& other);
		virtual ~Animal(void);
		Animal& operator = (const Animal& other);
		Animal(std::string type);

		std::string		getType(void) const;
		void			setType(std::string a_type);
		virtual void	makeSound(void) const = 0;
};

#endif
