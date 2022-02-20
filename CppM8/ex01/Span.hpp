/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 08:43:58 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/19 11:57:19 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <exception>

class Span
{
	private:
		unsigned int		_n;
		std::vector<int>	_v;
	public:
		Span();
		Span(unsigned int num);
		Span(const Span& other);
		~Span();
		Span& operator = (const Span& other);

		void			addNumber(int num);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

		template <typename Iterator>
		void addNumber(Iterator begin, Iterator end)
		{
			if ((this->_v.size() + std::distance(begin, end)) > this->_n)
				throw GeneralException();
			std::copy(begin, end, std::back_inserter(this->_v));
		};

	class	ShortestException : public std::exception
	{
		public:
			virtual const char * what() const throw ()
			{
				return	"Can not execut shortestSpan. The vector need more tham one element.";
			}
	};

	class	LongestException : public std::exception
	{
		public:
			virtual const char * what() const throw ()
			{
				return	"Can not execut longestSpan. The vector need more tham one element.";
			}
	};

	class	GeneralException : public std::exception
	{
		public:
			virtual const char * what() const throw ()
			{
				return "General error";
			}
	};
};

#endif

