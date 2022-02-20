/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:35:31 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/01 11:35:37 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

#include "Animal.hpp"

class Dog : public Animal {
	private:

	public:
		Dog(void);
		Dog(const Dog& other);
		~Dog(void);
		Dog& operator = (const Dog& other);

		void makeSound(void) const;
};

#endif
