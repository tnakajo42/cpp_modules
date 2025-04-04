/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 22:43:02 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/31 19:30:01 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/ScalerConverter.hpp"

int main()
{
	std::string input;
	std::cout << "Enter a value: ";
	std::cin >> input;
	std::cout << std::endl;
	ScalerConverter::convert(input);
	std::cout << std::endl;
	return 0;
}
