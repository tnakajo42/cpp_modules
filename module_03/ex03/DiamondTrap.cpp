/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:54:15 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/25 21:03:42 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap(), _name("DiamondTrap")
{
    ClapTrap::_name = _name + "_clap_name";
    // _hitpoints = FragTrap::_hitpoints;
    // _energyPoints = ScavTrap::_energyPoints;
    // _attackDamage = FragTrap::_attackDamage;
    std::cout << "[NEW] DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name), _name(name)
{
    ClapTrap::_name = name + "_clap_name";
    // _hitpoints = FragTrap::_hitpoints;
    // std::cout << _hitpoints<< std::endl;
    // _energyPoints = ScavTrap::_energyPoints;
    // std::cout << _energyPoints << std::endl;
    // _attackDamage = FragTrap::_attackDamage;
    // std::cout << _attackDamage << std::endl;
    std::cout << "[NEW] DiamondTrap " << _name << " has appeared. (half FragTrap, half ScavTrap)" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &_DiamondTrap) : ScavTrap(_DiamondTrap), FragTrap(_DiamondTrap)
{
    *this = _DiamondTrap;
    std::cout << "[NEW] (DiamondTrap copy constructor called)" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &_DiamondTrap)
{
    std::cout << "[NEW] (DiamondTrap Copy assignment operator called)" << std::endl;
    if (this == &_DiamondTrap)
        return (*this);
    ScavTrap::operator=(_DiamondTrap);
    FragTrap::operator=(_DiamondTrap);
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
