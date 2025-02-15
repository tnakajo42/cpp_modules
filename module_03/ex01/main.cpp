/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:04:29 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/12 17:38:14 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

using std::cout;
using std::endl;

int	main(void) {
	ScavTrap pikachu("Pikachu");
	ScavTrap eevee("Eevee");
	ScavTrap lucario("Lucario");

	// eevee = lucario; copy assignment operator

    unsigned int thunderbolt = pikachu.setAttackDamage(20);
    unsigned int tackle = eevee.setAttackDamage(15);
    unsigned int power_up_punch = lucario.setAttackDamage(10);

	cout << endl;

	if (pikachu.attack("Eevee"))
	    eevee.takeDamage(thunderbolt);

	cout << endl;

	if (eevee.attack("Pikachu"))
    	pikachu.takeDamage(tackle);

	cout << endl;

	if (pikachu.attack("Eevee"))
    	eevee.takeDamage(thunderbolt);

	cout << endl;

	if (lucario.attack("Eevee"))
    {
        eevee.takeDamage(power_up_punch);
        power_up_punch = lucario.setAttackDamage(power_up_punch + 5);
    }

	cout << endl;

	if (lucario.attack("Pikachu"))
    {
        pikachu.takeDamage(power_up_punch);
        power_up_punch = pikachu.setAttackDamage(power_up_punch + 5);
    }

	cout << endl;
	
	pikachu.beRepaired(20);
	
	if (pikachu.attack("Lucario"))
    	lucario.takeDamage(thunderbolt);

	cout << endl;

	if (lucario.attack("Pikachu"))
    {
        pikachu.takeDamage(power_up_punch);
        power_up_punch = lucario.setAttackDamage(power_up_punch + 5);
    }

	cout << endl;

	if (lucario.attack("Pikachu"))
    {
        pikachu.takeDamage(power_up_punch);
        power_up_punch = lucario.setAttackDamage(power_up_punch + 5);
    }

	cout << endl;

	if (lucario.attack("Pikachu"))
    {
        pikachu.takeDamage(power_up_punch);
        power_up_punch = lucario.setAttackDamage(power_up_punch + 5);
    }

	cout << endl;

	if (lucario.attack("Pikachu"))
    {
        pikachu.takeDamage(power_up_punch);
        power_up_punch = lucario.setAttackDamage(power_up_punch + 5);
    }

	cout << endl;

	if (lucario.attack("Eevee"))
    {
        pikachu.takeDamage(power_up_punch);
        power_up_punch = pikachu.setAttackDamage(power_up_punch + 5);
    }

	cout << endl;
    

	pikachu.guardGate();
	lucario.guardGate();
	eevee.guardGate();

	cout << endl;
	

	return 0;
}
