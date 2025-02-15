/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:24:53 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/12 15:12:21 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap pikachu("pikachu");
    ClapTrap eevee("eevee");
    unsigned int thunderbolt = pikachu.setAttackDamage(2);
    unsigned int tackle = eevee.setAttackDamage(1);

    std::cout << std::endl;
    if (pikachu.attack("eevee"))
        eevee.takeDamage(thunderbolt);
    eevee.beRepaired(3);
    std::cout << std::endl;
    if (pikachu.attack("eevee"))
        eevee.takeDamage(thunderbolt);
    if (eevee.attack("pikachu"))
        pikachu.takeDamage(tackle);
    std::cout << std::endl;
    if (pikachu.attack("eevee"))
        eevee.takeDamage(thunderbolt);
    if (eevee.attack("pikachu"))
        pikachu.takeDamage(tackle);
    std::cout << std::endl;
    if (pikachu.attack("eevee"))
        eevee.takeDamage(thunderbolt);
    if (eevee.attack("pikachu"))
        pikachu.takeDamage(tackle);
    std::cout << std::endl;
    if (pikachu.attack("eevee"))
        eevee.takeDamage(thunderbolt);
    if (eevee.attack("pikachu"))
        pikachu.takeDamage(tackle);
    std::cout << std::endl;
    if (pikachu.attack("eevee"))
        eevee.takeDamage(thunderbolt);
    eevee.beRepaired(3);
    std::cout << std::endl;
    if (pikachu.attack("eevee"))
        eevee.takeDamage(thunderbolt);
    eevee.beRepaired(3);
    std::cout << std::endl;
    if (pikachu.attack("eevee"))
        eevee.takeDamage(thunderbolt);
    if (eevee.attack("pikachu"))
        pikachu.takeDamage(tackle);
    std::cout << std::endl;
    if (pikachu.attack("eevee"))
        eevee.takeDamage(thunderbolt);
    if (eevee.attack("pikachu"))
        pikachu.takeDamage(tackle);
    std::cout << std::endl;
    if (pikachu.attack("eevee"))
        eevee.takeDamage(thunderbolt);
    if (eevee.attack("pikachu"))
        pikachu.takeDamage(tackle);
    std::cout << std::endl;
    if (pikachu.attack("eevee"))
        eevee.takeDamage(thunderbolt);
    if (eevee.attack("pikachu"))
        pikachu.takeDamage(tackle);
    std::cout << std::endl;
    pikachu.beRepaired(3);
    if (eevee.attack("pikachu"))
        pikachu.takeDamage(tackle);
    std::cout << std::endl;
    if (pikachu.attack("eevee"))
        eevee.takeDamage(thunderbolt);
    eevee.beRepaired(3);
    std::cout << std::endl;

    return (0);
}
