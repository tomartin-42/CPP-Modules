/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:14:07 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/11 11:23:51 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include "Form.hpp"

class Intern {
	private:

	public:
		Intern();
		Intern(const Intern& other);
		~Intern();
		Intern& operator = (const Intern& other);

		int	selectCase(std::string check);
		Form* makeForm(std::string type, std::string name); 
		
		class IncorrectFormException : public std::exception {
			public:
			const char* what() const throw() {
				return "🚨 Incorrect form!!!!!!! 🚨";
			}
		};
};

#endif
