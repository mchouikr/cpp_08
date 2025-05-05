/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouikr <mchouikr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:36:34 by mchouikr          #+#    #+#             */
/*   Updated: 2025/05/05 17:49:52 by mchouikr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"



//std::list version
#include <list>
int main()
{
	std::cout << "-------------------" << std::endl;
	std::cout << "mutantstack version" << std::endl;
	std::cout << "-------------------" << std::endl;

	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

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

	std::cout << "-------------------" << std::endl;
	std::cout << "std::list version" << std::endl;
	std::cout << "-------------------" << std::endl;

	std::list<int> listExample;
	listExample.push_back(5);
	listExample.push_back(17);
	std::cout << listExample.back() << std::endl;
	listExample.pop_back();
	//use back and pop_back to get LIFO behavior
	std::cout << listExample.size() << std::endl;
	listExample.push_back(3);
	listExample.push_back(5);
	listExample.push_back(737);
	//[...]
	listExample.push_back(0);
	std::list<int>::iterator itList = listExample.begin();
	std::list<int>::iterator iteList = listExample.end();
	++itList;
	--itList;
	while (itList != iteList)
	{
		std::cout << *itList << std::endl;
		++itList;
	}
	std::list<int> l(listExample);

	return 0;
}