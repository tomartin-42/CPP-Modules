/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:45:46 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/04 08:35:05 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
	public: 
		Ice(void);
		Ice(const Ice& other);
		~Ice(void);
		Ice& operator = (const Ice& other);
		AMateria*	clone(void) const;
		void		use(ICharacter& target);
};

#endif
