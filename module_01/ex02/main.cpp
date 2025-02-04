/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:10:30 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/02 18:02:35 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main( void )
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << "🧟 ZOM ADDRESS 🧟 " << std::endl;
	std::cout << "   The memory address of the string variable is\n-> ";
	std::cout << &brain << std::endl;
	std::cout << "   The memory address held by stringPTR (pointer) is\n-> ";
	std::cout << &stringPTR << std::endl;
	std::cout << "   The memory address held by stringREF (reference) is\n-> ";
	std::cout << &stringREF << std::endl;
	std::cout << "\n🧟 ZOM VALUE 🧟" << std::endl;
	std::cout << "   The value of the string variable is\n-> ";
	std::cout << brain << std::endl;
	std::cout << "   The value pointed to by stringPTR (pointer) is\n-> ";
	std::cout << *stringPTR << std::endl;
	std::cout << "   The value pointed to by stringREF (reference) is\n-> ";
	std::cout << stringREF << std::endl;
	std::cout << "\n🧟 ZOM END 🧟" << std::endl;
	return (0);
}
