/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:04:29 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/15 18:42:56 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

using std::cout;
using std::endl;

int	main(void) {
	FragTrap charizard("Charizard"); // NEW

	cout << endl;

	ScavTrap pikachu("Pikachu");

    unsigned int thunderbolt = pikachu.setAttackDamage(20);

	cout << "\n[Battle 1] " << endl;

	if (pikachu.attack("Charizard")) // NEW
	    charizard.takeDamage(thunderbolt);

	cout << endl;

	if (charizard.attack("Piakchu")) // NEW
	    pikachu.takeDamage(charizard.getAttackDamage());

	cout << "\n[Battle 2] " << endl;

	if (pikachu.attack("Charizard")) // NEW
		charizard.takeDamage(thunderbolt);

	cout << endl;

	if (charizard.attack("Piakchu")) // NEW
		pikachu.takeDamage(charizard.getAttackDamage());

	cout << "\n[Battle 3] " << endl;

	if (pikachu.attack("Charizard")) // NEW
		charizard.takeDamage(thunderbolt);

	cout << endl;

	if (charizard.attack("Piakchu")) // NEW
		pikachu.takeDamage(charizard.getAttackDamage());
	
	cout << "\n[Battle 4] " << endl;

	if (pikachu.attack("Charizard")) // NEW
		charizard.takeDamage(thunderbolt);

	cout << endl;

	if (charizard.attack("Piakchu")) // NEW
		pikachu.takeDamage(charizard.getAttackDamage());

	cout << "\n[Battle 5] " << endl;

	if (pikachu.attack("Charizard")) // NEW
		charizard.takeDamage(thunderbolt);

	cout << endl;

	if (charizard.attack("Piakchu")) // NEW
		pikachu.takeDamage(charizard.getAttackDamage());
			


	cout << endl;

	pikachu.guardGate();

	cout << endl;
	

	return 0;
}
