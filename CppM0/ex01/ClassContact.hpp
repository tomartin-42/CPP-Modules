/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:09:04 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/13 15:17:41 by tommy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP

#include <string>

class contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone;
	std::string	_darkest_secret;

public:
	std::string	get_first_name(void);
	std::string	get_last_name(void);
	std::string	get_nickname(void);
	std::string	get_phone(void);
	std::string	get_darkest_secret(void);
	void		set_first_name(std::string str);
	void		set_last_name(std::string str);
	void		set_nickname(std::string str);
	void		set_phone(std::string str);
	void		set_darkest_secret(std::string str);
};

#endif
