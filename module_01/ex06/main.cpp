/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:33:10 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/03 15:43:08 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl	harl;

	if (ac != 2)
	{
		std::cout << "Usage: ./harlFilter <level>" << std::endl;
		return (EXIT_FAILURE);
	}
	harl.harlFilter(av[1]);
	return (EXIT_SUCCESS);
}
