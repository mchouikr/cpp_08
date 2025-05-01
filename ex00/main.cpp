/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouikr <mchouikr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:14:50 by mchouikr          #+#    #+#             */
/*   Updated: 2025/05/01 18:34:11 by mchouikr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

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
		easyfind(numbers, 22);
		std::cout << "Success" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;

}