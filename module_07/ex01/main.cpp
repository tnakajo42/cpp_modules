/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:49:23 by tnakajo           #+#    #+#             */
/*   Updated: 2025/04/03 22:36:31 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/iter.hpp"

int	main ()
{
	int		intArray[]		= {1, 2, 3, 5, 7, 11, 13};
	char	charArray[]		= {'a', 'b', 'c', '*', 'Z'};
	float	floatArray [] 	= {1.1f, 2.2f, 3.3f, 5.5f, 7.7f};
	std::string	strArray[]	= {"sandbox", "ft_popen", "picoshell"};

	std::cout << "\n_______________int__________________\n";
	iter(intArray, 7, printFunc<int>);

	std::cout << "\n______________double________________\n";
	iter(floatArray, 5, printFunc<double>);

	std::cout << "\n_______________char_________________\n";
	iter(charArray, 5, printFunc<char>);

	std::cout << "\n______________string________________" << std::endl;
	iter(strArray, 3, printFunc<std::string>);

	return 0;
}
