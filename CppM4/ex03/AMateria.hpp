/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 09:28:27 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/04 08:41:22 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <string>

class AMateria {
	protected:
		std::string	_type;
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria& other);
		virtual ~AMateria(void);
		AMateria& operator = (const AMateria& other);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		std::string getType(void);
};

#endif
