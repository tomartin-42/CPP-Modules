/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:08:50 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/13 17:22:19 by tommy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPHONEBOOK_HPP
# define CLASSPHONEBOOK_HPP

#include "ClassContact.hpp"

class	phone_book
{
private:
	contact	_contact[8];
	int		_index;

	void	_add_index(void);
	int		_get_index(void);

public:
	phone_book(void);
	void	new_contact(void);
	void	print_short(std::string str);
	void	search_list(void);
	void	select_search(void);
};

#endif
