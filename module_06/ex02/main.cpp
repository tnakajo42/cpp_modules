/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 22:43:02 by tnakajo           #+#    #+#             */
/*   Updated: 2025/04/01 21:31:08 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/Base.hpp"
#include <unistd.h>

int main ()
{
	std::cout << "___________________generate()________________" << std::endl;

	// std::srand(std::time(0)); // Seed random number generator
	Base* ptr1 = generate();
	sleep(1);
	Base* ptr2 = generate();

	std::cout << "____________________pointer__________________" << std::endl;
	identify(ptr1);
	identify(ptr2);
	
	std::cout << "___________________reference_________________" << std::endl;
	if (ptr1) identify(*ptr1);
	if (ptr2) identify(*ptr2);

	std::cout << "_____________________thanks__________________" << std::endl;
	delete ptr1;
	delete ptr2;
	
	return 0;
}
