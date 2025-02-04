/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:39:49 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/01 17:52:34 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string name;
	Zombie	*temp;

	std::cout << "🧟 HELLO ZOMBIE 🧟\n__________________________" << std::endl;

	/** first zombie */
	temp = newZombie("Ichiro");
	temp->announce();
	delete temp; // same as `free(temp);`

	/** second zombie */
	Zombie	*jiro = newZombie("Jiro");
	jiro->announce();
	delete jiro;

	/** third zombie */
	randomChump("Saburo");

	std::cout << "Your name: ";
	std::cin >> name;
	randomChump(name);

	std::cout << "__________________________\n🧟 THE END 🧟" << std::endl;
	return (0);
}
