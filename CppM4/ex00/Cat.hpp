/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:35:19 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/01 11:35:24 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__

#include "Animal.hpp"

class Cat : public Animal {
	private:

	public:
		Cat(void);
		Cat(const Cat& other);
		~Cat(void);
		Cat& operator = (const Cat& other);

		void makeSound(void) const;
};

#endif
