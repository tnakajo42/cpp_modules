/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:08:09 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/15 18:39:41 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) : ClapTrap()
{
    std::cout << "[NEW] " << _name << " has be born to 42. (FragTrap default constructor called)";
    std::cout << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitpoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "[NEW] " << _name << " has appeared. (FragTrap constructor with name parameter called)";
    std::cout << std::endl;
}

FragTrap::FragTrap(const FragTrap &_FragTrap) : ClapTrap(_FragTrap)
{
    *this = _FragTrap;
    std::cout << "[NEW] (FragTrap copy constructor called)" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &_FragTrap)
{
    std::cout << "[NEW] (FragTrap Copy assignment operator called)" << std::endl;
    if (this == &_FragTrap)
        return (*this);
    ClapTrap::operator=(_FragTrap);
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "[NEW] " << _name << " has disappeared. (FragTrap destructor called)";
    std::cout << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if (_hitpoints <= 0)
    {
        std::cout << "[NEW] " << _name << " is dead and cannot high five 🫠 (by FragTrap)" << std::endl;
        return;
    }
    std::cout << "[NEW] " << _name << " high fives everyone! 🖐️ (by FragTrap)" << std::endl;
}
