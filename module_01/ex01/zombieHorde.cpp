/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:40:13 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/01 20:58:59 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
	int	i;
	Zombie*	horde;

	i = 0;
	if (N < 1)
		return (NULL);
	horde = new Zombie[N];
	if (name.empty())
		return (horde);
	while (N > i)
	{
		horde[i].setName(name);
		std::cout << "Zombie " << horde[i].getName() << ": ";
		horde[i].announce();
		i++;
	}
	return (horde);
}
