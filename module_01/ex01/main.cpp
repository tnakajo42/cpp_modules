/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:39:49 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/02 17:07:20 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( int ac, char **av)
{
	int	i;
	Zombie*	horde;

	i = 0;
	if (ac != 3)
	{
		std::cout << "Try: $ ./zombies [numbers] [name]\n";
		return (0);
	}
	std::cout << "🧟 HELLO ZOMBIES 🧟\n________________________" << std::endl;
	horde = zombieHorde( std::atoi(av[1]), av[2] );
	while (i < std::atoi(av[1]))
	{
		std::cout << "[" << i << "]";
		std::cout << horde[i].getName() << ": ";
		horde[i].announce();
		i++;
	}
	delete[] horde;

	std::cout << "________________________\n🧟 THE END 🧟" << std::endl;
	return (0);
}
