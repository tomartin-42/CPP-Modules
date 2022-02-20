/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:12:10 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/19 19:31:22 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>
#include <list>

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "=====================LIST===================" << std::endl;

	std::list<int> m_list;

	m_list.push_back(5);
	m_list.push_back(17);

	std::cout << m_list.back() << std::endl;
	m_list.pop_back();
	std::cout << m_list.size() << std::endl;
	m_list.push_back(3);
	m_list.push_back(5);
	m_list.push_back(737);
	//[...]
	m_list.push_back0(0);
	std::list<int>::iterator l_it = m_list.begin();
	std::list<int>::iterator l_ite = m_list.end();
	++l_it;
	--l_it;
	while (l_it != l_ite)
	{
		std::cout << *l_it << std::endl;
		++l_it;
	}

	return 0;
}

