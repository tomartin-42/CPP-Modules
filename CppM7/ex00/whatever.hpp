/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 07:49:05 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/18 07:49:49 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T& a, T& b)
{
	T	aux = a;

	a = b;
	b = aux;
}

template <typename T>
T&	min(T& a, T& b) {return a < b ? a : b;}

template <typename T>
T& max(T& a, T& b) {return a > b ? a : b;}

#endif
