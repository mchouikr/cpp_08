/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouikr <mchouikr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:14:50 by mchouikr          #+#    #+#             */
/*   Updated: 2025/05/05 12:26:34 by mchouikr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

//easyfind works only with sequential containers (vector, deque, list)
//does not work with associative containers (map, set) 

int main() {

	std::cout << "-------------------" << std::endl;
	std::cout << "Example with vector" << std::endl;
	std::cout << "-------------------" << std::endl;

	std::vector<int> numbers;

	numbers.push_back(10);
	numbers.push_back(22);
	numbers.push_back(41);
	numbers.push_back(33);

	try {
		easyfind(numbers, 21);
		std::cout << "Vector test: Success" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------------------" << std::endl;
	std::cout << "Example with list" << std::endl;
	std::cout << "-------------------" << std::endl;

	std::list<int> numbers2;

	numbers2.push_back(10);
	numbers2.push_back(22);
	numbers2.push_back(41);
	numbers2.push_back(33);

	try {
		easyfind(numbers2, 22);
		std::cout << "List test: Success" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------------------" << std::endl;
	std::cout << "Example with deque" << std::endl;
	std::cout << "-------------------" << std::endl;

	std::deque<int> numbers3;

	numbers3.push_back(10);
	numbers3.push_back(22);
	numbers3.push_back(41);
	numbers3.push_back(33);

	try {
		easyfind(numbers3, 22);
		std::cout << "Deque test: Success" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}