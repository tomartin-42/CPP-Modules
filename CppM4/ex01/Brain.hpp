/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 07:49:07 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/01 08:14:28 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

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
