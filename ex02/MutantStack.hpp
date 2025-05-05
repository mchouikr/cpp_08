/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouikr <mchouikr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:37:26 by mchouikr          #+#    #+#             */
/*   Updated: 2025/05/05 17:37:22 by mchouikr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template < class T, class Container = std::deque<T> >

class MutantStack : public std::stack<T, Container> {

public:
	MutantStack() : std::stack<T, Container>() {}
	~MutantStack() {}
	MutantStack(const MutantStack &src)  : std::stack<T, Container>(src) {}
	MutantStack &operator=(const MutantStack &rhs) {
		std::stack<T, Container>::operator=(rhs);
		return (*this);
	}

	//define iterator types
	typedef typename Container::iterator iterator;
	typedef typename Container::const_iterator const_iterator;
	typedef typename Container::reverse_iterator reverse_iterator;
	typedef typename Container::const_reverse_iterator const_reverse_iterator;

	///provide access to the underlying container iterators
	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
	const iterator begin() const { return this->c.begin(); }
	const iterator end() const { return this->c.end(); }

	reverse_iterator rbegin() { return this->c.rbegin(); }
	reverse_iterator rend() { return this->c.rend(); }
	const reverse_iterator rbegin() const { return this->c.rbegin(); }
	const reverse_iterator rend() const { return this->c.rend(); }

};

#endif