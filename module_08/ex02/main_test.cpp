/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 20:47:52 by tnakajo           #+#    #+#             */
/*   Updated: 2025/04/06 15:40:20 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	{
		MutantStack<double> mstack;
	
		mstack.push(5.9);
		mstack.push(17.2);
		mstack.push(1.2);
	
		std::cout << mstack.top() << std::endl;
	
		mstack.pop();
	
		std::cout << mstack.size() << std::endl;
	}
	{
		MutantStack<std::string, std::list<std::string> > mstack;
	
		mstack.push("5.9");
		mstack.push("17.2");
		mstack.push("1.2");
	
		std::cout << mstack.top() << std::endl;
	
		mstack.pop();
	
		std::cout << mstack.size() << std::endl;
	}
	return 0;
}