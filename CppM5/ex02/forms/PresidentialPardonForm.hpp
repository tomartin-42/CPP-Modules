/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 08:22:38 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/10 08:16:44 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#define PPF PresidentialPardonForm

#include <string>
#include <fstream>
#include "Form.hpp"

class PresidentialPardonForm : public Form {
	private:
		std::string	_target;
	public:
		PPF();
		PPF(std::string targe);
		PPF(const PPF& other);
		~PPF();
		PPF& operator = (const PPF& other);

		std::string getTarget();

		void	execute(Bureaucrat const & executor) const;
};

#endif
