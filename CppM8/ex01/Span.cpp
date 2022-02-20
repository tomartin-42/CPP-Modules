/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 08:43:55 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/18 20:17:51 by tommy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <utility>
#include <cstdlib>
#include <climits>

Span::Span() : _n(0) {}
Span::Span(unsigned int num) : _n(num) {this->_v.reserve(this->_n);}
Span::Span(const Span& other) : _n(other._n), _v(other._v) {}
Span::~Span() {this->_v.clear();}

Span& Span::operator = (const Span& other)
{
	this->_n = other._n;
	this->_v.clear();
	this->_v.reserve(this->_n);
	for (int i = 0; i < this->_v.size(); i++)
		this->_v.push_back(other._v[i]);
	return *this;
}

void	Span::addNumber(int num)
{
	try
	{
		if (this->_v.size() < this->_n)
			this->_v.push_back(num);
		else
			throw "Can not add more numbers!!!";
	}
	catch (const char* e)
	{
		std::cout << e << std::endl;
	}
}

unsigned int	Span::shortestSpan()
{
	unsigned int				diff = UINT_MAX ;
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	it_next;

	if (this->_v.size() < 2)
		throw Span::ShortestException();
	for (it = this->_v.begin(); it != _v.end(); it++)
	{
		it_next = it + 1;
		while (it_next != _v.end())
		{
			if (std::abs(*it - (*it_next)) < diff)
				diff = std::abs(*it - (*it_next));
			it_next++;
		}
	}
	return diff;
}

unsigned int	Span::longestSpan()
{
	std::vector<int>::iterator	it;
	std::pair<int, int>			num(0, 0);
	
	if (this->_v.size() < 2)
		throw Span::LongestException();
	for(it = this->_v.begin(); it != this->_v.end(); it++)
	{
		if (*it < num.first)
			num.first = *it;
		if (*it > num.second)
			num.second = *it;
	}
	return (std::abs(num.first - (num.second)));
}

