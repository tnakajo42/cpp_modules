/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:49:23 by tnakajo           #+#    #+#             */
/*   Updated: 2025/04/03 23:13:30 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/Array.hpp"
#include <iostream>
#include <cstdlib>

#define MAX_VAL 42
int main()
{
	Array<int> arr(5); // Create an Array of 5 integers

	for (unsigned int i = 0; i < arr.size(); i++)
		arr[i] = i * 10;

	std::cout << "Array elements: ";
	for (unsigned int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	Array<int> copiedArr = arr; // Copy constructor
	copiedArr[0] = 100; // Modify copied array

	std::cout << "Original array first element: " << arr[0] << std::endl;
	std::cout << "Copied array first element:   " << copiedArr[0] << std::endl;

	try {
		std::cout << arr[10] << std::endl;
	} catch (const std::out_of_range& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
