/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 08:37:01 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/18 08:37:10 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <vector>
#include <algorithm>
#include <iostream>

template <typename T>
void easyfind(T& data, int search)
{
	if(std::find(data.begin(), data.end(), search) != data.end())
		std::cout << "Find " << search << std::endl;
	else
		throw "Can not found";
}

#endif
