/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:08:09 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/15 21:10:37 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) : ClapTrap()
{
    std::cout << "FragTrap " << _name << " has be born to 42.";
    std::cout << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitpoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " has appeared.";
    std::cout << std::endl;
}

FragTrap::FragTrap(const FragTrap &_FragTrap) : ClapTrap(_FragTrap)
{
    *this = _FragTrap;
    std::cout << "(FragTrap copy constructor called)" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &_FragTrap)
{
    std::cout << "(FragTrap Copy assignment operator called)" << std::endl;
    if (this == &_FragTrap)
        return (*this);
    ClapTrap::operator=(_FragTrap);
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " has disappeared.";
    std::cout << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if (_hitpoints <= 0)
    {
        std::cout << "FragTrap " << _name << " is dead and cannot high five 🫠" << std::endl;
        return;
    }
    std::cout << "FragTrap " << _name << " high fives everyone! 🖐️" << std::endl;
}
