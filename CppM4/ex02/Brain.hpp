/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 07:49:07 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/02 08:41:45 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain {
	private:
		std::string	ideas[100];
	
	public:
		Brain(void);
		Brain(const Brain& other);
		~Brain(void);
		Brain& operator = (const Brain& other);
};

#endif
