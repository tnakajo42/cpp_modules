/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:12:45 by tnakajo           #+#    #+#             */
/*   Updated: 2025/04/05 20:42:49 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/span.hpp"

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main()
{
	// Test 1: Example from exercise
	std::cout << "Test 1: Example from exercise\n";
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl; // Expected: 2
	std::cout << "Longest span:  " << sp.longestSpan() << std::endl;   // Expected: 14

	// Test 2: Duplicates
	std::cout << "\nTest 2: Duplicates\n";
	Span sp2 = Span(3);
	sp2.addNumber(5);
	sp2.addNumber(5);
	sp2.addNumber(5);
	std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl; // Expected: 0
	std::cout << "Longest span:  " << sp2.longestSpan() << std::endl;   // Expected: 0

	// Test 3: Large number of elements with iterators
	std::cout << "\nTest 3: 10,000 consecutive numbers\n";
	Span sp_large(10000);
	std::vector<int> large_vec(10000);
	for (int i = 0; i < 10000; ++i)
		large_vec[i] = i;
	sp_large.addNumbers(large_vec.begin(), large_vec.end());
	std::cout << "Shortest span: " << sp_large.shortestSpan() << std::endl; // Expected: 1
	std::cout << "Longest span:  " << sp_large.longestSpan() << std::endl;   // Expected: 9999

	// Test 4: Edge case - N=0
	std::cout << "\nTest 4: N=0\n";
	try {
		Span sp0;
		sp0.addNumber(1);
	} catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl; // Expected: Span is full
	}

	// Test 5: Edge case - N=1
	std::cout << "\nTest 5: N=1\n";
	Span sp1(1);
	sp1.addNumber(1);
	try {
		sp1.addNumber(2);
	} catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl; // Expected: Span is full
	}
	try {
		sp1.shortestSpan();
	} catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl; // Expected: not enough numbers
	}

	// Test 6: Assignment operator
	std::cout << "\nTest 6: Assignment operator\n";
	Span sp_assign1(5);
	sp_assign1.addNumber(1);
	sp_assign1.addNumber(2);
	Span sp_assign2(3);
	sp_assign2 = sp_assign1;
	std::cout << "Assigned shortest span: " << sp_assign2.shortestSpan() << std::endl; // Expected: 1
	Span sp_assign3(1);
	try {
		sp_assign3 = sp_assign1;
	} catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl; // Expected: exceeds maximum N
	}

	// Test 7: Random numbers
	std::cout << "\nTest 7: Random numbers\n";
	srand(static_cast<unsigned>(time(NULL)));
	Span sp_rand(10);
	std::vector<int> rand_vec(10);
	for (int i = 0; i < 10; ++i)
	{
		rand_vec[i] = rand() % 1000;
		// std::cout << rand_vec[i] << std::endl; 
	}
	sp_rand.addNumbers(rand_vec.begin(), rand_vec.end());
	std::cout << "Shortest span: " << sp_rand.shortestSpan() << std::endl;
	std::cout << "Longest span:  " << sp_rand.longestSpan() << std::endl;

	return 0;
}
