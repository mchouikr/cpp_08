/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouikr <mchouikr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:31:54 by mchouikr          #+#    #+#             */
/*   Updated: 2025/05/05 15:52:35 by mchouikr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <cstddef>
#include <vector>
#include <algorithm>
#include <limits>

class Span {

public:

	Span();
	Span(std::size_t const N);
	~Span();
	Span(const Span &src);
	Span &operator=(const Span &rhs);

	void addNumber(std::size_t const newNumber);

	std::size_t shortestSpan(void);
	std::size_t longestSpan(void);

	class OutOfBounds : public std::exception {
		public:
			virtual const char *what(void) const throw();			
	};
	class NotEnoughElements : public std::exception {
		public:
			virtual const char *what(void) const throw();			
	};

private:
	std::vector<std::size_t> _numbers;
	std::size_t _size;

};

#endif