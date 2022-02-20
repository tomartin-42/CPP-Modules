/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 08:06:39 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/01 08:09:49 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain*	p_Brain;

	public:
		Dog(void);
		Dog(const Dog& other);
		~Dog(void);
		Dog& operator = (const Dog& other);

		void makeSound(void) const;
};

#endif
