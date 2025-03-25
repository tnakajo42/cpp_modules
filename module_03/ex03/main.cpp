/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:04:29 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/25 19:55:55 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

using std::cout;
using std::endl;

int	main(void) {
	DiamondTrap mewtwo("🟣Mewtwo"); // NEW
	FragTrap charizard("🔴Charizard");
	ScavTrap pikachu("🟡Pikachu");

	cout << endl;

	unsigned int thunderbolt = pikachu.setAttackDamage(20);
	unsigned int ember = charizard.setAttackDamage(6);
	unsigned int psychic = mewtwo.setAttackDamage(50);

	cout << "💎DiamondTrap💎" << endl;

	pikachu.guardGate();
	charizard.highFivesGuys();
	mewtwo.whoAmI(); // NEW

	/**
	 * Hit points (FragTrap) // 100
	 * Energy points (ScavTrap) // 50 (not 100)
	 * Attack damage (FragTrap) // 30
	 * attack() (ScavTrap)
	 */

	cout << "\n[Battle 1] " << endl;

	if (mewtwo.attack("🟡Pikachu"))
	    pikachu.takeDamage(psychic);
	cout << endl;

	pikachu.beRepaired(10);
	cout << endl;

	if (charizard.attack("🟣Mewtwo"))
	    mewtwo.takeDamage(ember);
	cout << endl;

	cout << "[Battle 2] " << endl;

	if (mewtwo.attack("🟡Pikachu"))
	    pikachu.takeDamage(psychic);
	cout << endl;

	if (pikachu.attack("🟣Mewtwo"))
	    mewtwo.takeDamage(thunderbolt);
	cout << endl;

	if (charizard.attack("🟣Mewtwo"))
	    mewtwo.takeDamage(ember);
	cout << endl;

	if (mewtwo.attack("🟡Pikachu"))
	    pikachu.takeDamage(psychic);
	cout << endl;

	if (pikachu.attack("🟣Mewtwo"))
	    mewtwo.takeDamage(thunderbolt);
	cout << endl;

	if (charizard.attack("🟣Mewtwo"))
	    mewtwo.takeDamage(ember);
	cout << endl;

	cout << "[Battle 3] " << endl;
	
	if (mewtwo.attack("🔴Charizard"))
	    charizard.takeDamage(psychic);
	cout << endl;

	if (pikachu.attack("🟣Mewtwo"))
	    mewtwo.takeDamage(thunderbolt);
	cout << endl;

	if (charizard.attack("🟣Mewtwo"))
	    mewtwo.takeDamage(ember);
	cout << endl;

	cout << "[Battle 4] " << endl;

	if (mewtwo.attack("🔴Charizard"))
	    charizard.takeDamage(psychic);
	cout << endl;

	if (pikachu.attack("🟣Mewtwo"))
	    mewtwo.takeDamage(thunderbolt);
	cout << endl;

	if (charizard.attack("🟣Mewtwo"))
	    mewtwo.takeDamage(ember);
	cout << endl;

	cout << "[Battle 5] " << endl;

	if (mewtwo.attack("🟡Pikachu"))
	    pikachu.takeDamage(psychic);
	cout << endl;

	if (pikachu.attack("🟣Mewtwo"))
	    mewtwo.takeDamage(thunderbolt);
	cout << endl;

	if (charizard.attack("🟣Mewtwo"))
	    mewtwo.takeDamage(ember);
	cout << endl;

	pikachu.guardGate();
	charizard.highFivesGuys();
	mewtwo.whoAmI(); // NEW

	cout << endl;
	

	return 0;
}
