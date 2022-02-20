/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 09:36:14 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/13 15:18:14 by tommy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

std::string	contact::get_first_name(void)
{
	return(this->_first_name);
}

std::string	contact::get_last_name(void)
{
	return(this->_last_name);
}

std::string	contact::get_nickname(void)
{
	return(this->_nickname);
}

std::string	contact::get_phone(void)
{
	return(this->_phone);
}

std::string	contact::get_darkest_secret(void)
{
	return(this->_darkest_secret);
}

void	contact::set_first_name(std::string str)
{
	this->_first_name = str;
}

void	contact::set_last_name(std::string str)
{
	this->_last_name = str;
}

void	contact::set_nickname(std::string str)
{
	this->_nickname = str;
}

void	contact::set_phone(std::string str)
{
	this->_phone = str;
}

void	contact::set_darkest_secret(std::string str)
{
	this->_darkest_secret = str;
}

