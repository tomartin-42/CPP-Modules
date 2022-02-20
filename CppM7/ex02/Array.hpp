/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:03:16 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/18 11:48:01 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

template<typename T>
class Array
{
	private:
		T*				_element;
		unsigned int	_n;

	public:
		Array() : _element(new T()), _n(0) {}

		Array(unsigned int n) : _element(new T[n]()), _n(n) {}
		
		Array(const Array& other) 
			: _element(new T[other._n]()), 
			_n(other._n)
		{
			for (int i = 0; i < this->_n; i++)
				this->_element[i] = other._element[i];
		};

		~Array() {delete [] this->_element;}

		Array& operator=(const Array& other)
		{
			delete [] this->_element;
			this->_element = new T[other._n];
			for (int i = 0; i < this->n; i++)
				this->_element[i] = other._element[i];
			this->_n = other._n;
			return *this;
		};

		T &operator [](unsigned int i)
		{
			if (i > static_cast<unsigned int>(this->_n) - 1)
				throw AccessIncorrectException();
			return(this->_element[i]);
		};

		void	size(void) {return this->_n;}

		class AccessIncorrectException : public std::exception
		{
			virtual const char* what() throw()
			{
				return "Can not access to array element";
			}
		};
};


#endif
