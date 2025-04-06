/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:12:45 by tnakajo           #+#    #+#             */
/*   Updated: 2025/04/05 20:42:33 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/easyfind.hpp"
// #include <vector>

// std::vector (Dynamic Array)
// best for random access & growth at the end
int	test_vector()
{
	// std::vector<int> numbers = {10, 20, 30, 40, 50}; // not allowed in cpp98
	std::vector<int> numbers;
	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);
	numbers.push_back(40);
	numbers.push_back(50);

	try {
		std::vector<int>::iterator it = easyfind(numbers, 10);
		std::cout << "Found value in vactor: " << *it << std::endl;
	} catch (const std::exception &e) { std::cout << e.what() << std::endl; }

	try {
		std::vector<int>::iterator it = easyfind(numbers, 100);
		std::cout << "Found value in vactor: " << *it << std::endl;
	} catch (const std::exception &e) { std::cout << e.what() << std::endl; }

	return 0;
}

// std::list (Doubly Linked List)
// best for frequent insertions/removals anywhere
void test_list()
{
	std::list<int> numbers;
	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);
	numbers.push_back(40);
	numbers.push_back(50);

	std::cout << "\nTesting std::list<int>..." << std::endl;
	try {
		std::list<int>::iterator it = easyfind(numbers, 20);
		std::cout << "Found value in list: " << *it << std::endl;
	} catch (const std::exception &e) { std::cout << e.what() << std::endl; }

	try {
		easyfind(numbers, 100); // Should throw an exception
	} catch (const std::exception &e) { std::cout << e.what() << std::endl; }
}

// std::deque (Double-Ended Queue)
// best for fast insertions/removals at both ends
void test_deque()
{
	std::deque<int> numbers;
	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);
	numbers.push_back(40);
	numbers.push_back(50);

	std::cout << "\nTesting std::deque<int>..." << std::endl;
	try {
		std::deque<int>::iterator it = easyfind(numbers, 30);
		std::cout << "Found value in deque: " << *it << std::endl;
	} catch (const std::exception &e) { std::cout << e.what() << std::endl; }

	try {
		easyfind(numbers, 100); // Should throw an exception
	} catch (const std::exception &e) { std::cout << e.what() << std::endl; }
}

int	main()
{
	test_vector();
	test_list();
	test_deque();
	return 0;
}
