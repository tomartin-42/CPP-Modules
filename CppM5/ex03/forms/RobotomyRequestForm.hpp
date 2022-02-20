/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 08:22:38 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/10 08:18:11 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#define RRF RobotomyRequestForm

#include <string>
#include <fstream>
#include "Form.hpp"

class RobotomyRequestForm : public Form {
	private:
		std::string	_target;
	public:
		RRF();
		RRF(std::string targe);
		RRF(const RRF& other);
		~RRF();
		RRF& operator = (const RRF& other);

		std::string getTarget();

		void	execute(Bureaucrat const & executor) const;
};

#endif
