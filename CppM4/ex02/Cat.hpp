/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 08:06:05 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/02 08:40:50 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain*	p_Brain;

	public:
		Cat(void);
		Cat(const Cat& other);
		~Cat(void);
		Cat& operator = (const Cat& other);
		void makeSound(void) const;
};

#endif
