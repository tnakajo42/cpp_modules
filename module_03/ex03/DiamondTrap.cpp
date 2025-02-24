/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:54:15 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/17 17:27:23 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap(), _name("DiamondTrap")
{
    this->ClapTrap::_name = this->_name + "_clap_name";
    this->_hitpoints = FragTrap::_hitpoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "[NEW] DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) 
    : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
    // this->_hitpoints = FragTrap::_hitpoints;
    // this->_energyPoints = ScavTrap::_energyPoints;
    // this->_attackDamage = FragTrap::_attackDamage;
    // this->_hitpoints = FragTrap::getHitpoints();
    // this->_energyPoints = ScavTrap::getEnergyPoints();
    // this->_attackDamage = FragTrap::getAttackDamage();
    // this->_hitpoints = ScavTrap::getHitpoints(); // test
    // this->_energyPoints = FragTrap::getEnergyPoints(); // test
    // this->_attackDamage = ScavTrap::getAttackDamage(); // test

    this->_hitpoints = FragTrap::_hitpoints;   // Inherit from FragTrap
    this->_energyPoints = ScavTrap::_energyPoints; // Inherit from ScavTrap
    this->_attackDamage = FragTrap::_attackDamage; // Inherit from FragTrap


    std::cout << "[DEBUG] DiamondTrap " << _name << " initialized with:" << std::endl;
    std::cout << "  Hitpoints: " << this->_hitpoints << std::endl;
    std::cout << "  Energy Points: " << this->_energyPoints << std::endl;
    std::cout << "  Attack Damage: " << this->_attackDamage << std::endl;
    
    std::cout << "[NEW] DiamondTrap " << _name << " has appeared. (half FragTrap, half ScavTrap)" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &_DiamondTrap) 
    : ClapTrap(_DiamondTrap), ScavTrap(_DiamondTrap), FragTrap(_DiamondTrap), _name(_DiamondTrap._name)
{
    std::cout << "[NEW] (DiamondTrap copy constructor called)" << std::endl;
}

// DiamondTrap::DiamondTrap(const DiamondTrap &_DiamondTrap)
//     : ClapTrap(), ScavTrap(_DiamondTrap), FragTrap(_DiamondTrap)
// {
//     *this = _DiamondTrap;
//     std::cout << "[NEW] (DiamondTrap copy constructor called)" << std::endl;
// }

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &_DiamondTrap)
{
    std::cout << "[NEW] (DiamondTrap Copy assignment operator called)" << std::endl;
    if (this == &_DiamondTrap)
        return (*this);
    ScavTrap::operator=(_DiamondTrap);
    FragTrap::operator=(_DiamondTrap);
    this->_name = _DiamondTrap._name;  // Missing assignment
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "[NEW] DiamondTrap " << this->_name << " has disappeared." << std::endl;
}

bool DiamondTrap::attack(std::string const & target)
{
    if (this->_hitpoints <= 0)
    {
        std::cout << "DiamondTrap " << this->_name << " is dead and cannot attack 🫠" << std::endl;
        return (false);
    }
    else if (this->_energyPoints <= 0)
    {
        std::cout << "DiamondTrap " << this->_name << " has no energy left and cannot attack 😫" << std::endl;
        return (false);
    }
    std::cout << "DiamondTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage." << std::endl;
    this->_energyPoints -= 1;
    std::cout << "DiamondTrap " << this->_name << " has " << this->_energyPoints << " energy points left." << std::endl;
    return (true);
}

void DiamondTrap::whoAmI(void)
{
    if (this->_hitpoints <= 0)
    {
        std::cout << "DiamondTrap " << this->_name << " is dead and cannot say who am I 🫠" << std::endl;
        return;
    }
    std::cout << "I am " << this->_name << " and my ClapTrap name is " << this->ClapTrap::_name << std::endl;
}
