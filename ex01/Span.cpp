/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouikr <mchouikr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:38:15 by mchouikr          #+#    #+#             */
/*   Updated: 2025/05/05 16:35:39 by mchouikr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0) {}

Span::Span(std::size_t const N) : _size(N) {}

Span::~Span() {}

Span::Span(const Span &src) : _numbers(src._numbers), _size(src._size) {}

Span &Span::operator=(const Span &rhs) {
	if (this != &rhs)
	{
		this->_numbers = rhs._numbers;
		this->_size = rhs._size;
	}
	return (*this);
}

void Span::addNumber(std::size_t const newNumber) {
	if (this->_numbers.size() + 1 > this->_size)
		throw Span::OutOfBounds();
	this->_numbers.push_back(newNumber);
}

std::size_t Span::shortestSpan(void) {
	if (this->_size < 2)
		throw Span::NotEnoughElements();
		
	//classify elements in ascending order using std::sort
	std::vector<std::size_t> tmp = this->_numbers;
	std::sort(tmp.begin(), tmp.end());

	//iterate through classified elements, calculate difference between each element and return the lowest 
	std::size_t shortestSpan = std::numeric_limits<std::size_t>::max();
	for (std::vector<std::size_t>::iterator it = tmp.begin(); it + 1 != tmp.end(); ++it)
	{
		std::size_t diff = *(it + 1) - *it;
		if (diff < shortestSpan)
		{
			shortestSpan = diff;
		}
	}
	return shortestSpan;
}

std::size_t Span::longestSpan(void) {
	if (this->_size < 2)
		throw Span::NotEnoughElements();

	// Finding the minimum value
    std::vector<std::size_t>::iterator min_element = std::min_element(this->_numbers.begin(), this->_numbers.end());
    std::size_t min = *min_element;
		
	// Finding the maximum value
    std::vector<std::size_t>::iterator max_element = std::max_element(this->_numbers.begin(), this->_numbers.end());
    std::size_t max = *max_element;
	
	return (max - min);
}


const char *Span::OutOfBounds::what(void) const throw() {
	return ("Out of Bounds");
}

const char *Span::NotEnoughElements::what(void) const throw() {
	return ("Not enough elements");
}
