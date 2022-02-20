/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 08:22:38 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/09 21:09:36 by tommy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#define SCF ShrubberyCreationForm

#include <string>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
	private:
		std::string	_target;
	public:
		SCF();
		SCF(std::string targe);
		SCF(const SCF& other);
		~SCF();
		SCF& operator = (const SCF& other);

		std::string getTarget();

		void	execute(Bureaucrat const & executor) const;
};

#endif
