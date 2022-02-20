/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:45:46 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/02 20:09:45 by tommy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
	public: 
		Cure(void);
		Cure(const Cure& other);
		~Cure(void);
		Cure& operator = (const Cure& other);
		AMateria*	clone(void) const;
		void		use(ICharacter& target);
};

#endif
