/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:30:46 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/12 18:21:37 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

void	to_char(const char* str);
void	to_int(const char* str);
void	to_float(const char* str);
void	to_double(const char* str);
int		nan_select(const char* str);

#endif
