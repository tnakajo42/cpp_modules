/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:04:32 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/15 18:10:26 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
} 

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " has appeared." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &_ScavTrap) : ClapTrap(_ScavTrap)
{
    *this = _ScavTrap;
    std::cout << "copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &_ScavTrap)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &_ScavTrap)
        return (*this);
    ClapTrap::operator=(_ScavTrap);
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " has disappeared." << std::endl;
}

bool ScavTrap::attack(std::string const & target)
{
    if (this->_hitpoints <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " is dead and cannot attack 🫠" << std::endl;
        return (false);
    }
    else if (this->_energyPoints <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " has no energy left and cannot attack 😫" << std::endl;
        return (false);
    }
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage." << std::endl;
    this->_energyPoints -= 1;
    std::cout << "ScavTrap " << this->_name << " has " << this->_energyPoints << " energy points left." << std::endl;
    return (true);
}

unsigned int	ScavTrap::getAttackDamage(void) const
{
    return (this->_attackDamage);
}

unsigned int	ScavTrap::setAttackDamage(unsigned int amount)
{
    this->_attackDamage = amount;
    return (this->_attackDamage);
}

void ScavTrap::guardGate(void)
{
	if (_hitpoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead and cannot guard the Pokemon Gym 🫠" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " has entered in Pokemon Gym keeper mode." << std::endl;
}

/*
void ScavTrap::takeDamage(unsigned int amount)
{
    if (this->_hitpoints <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " is already dead 🫠" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_name << " takes " << amount << " points of damage 🤕" << std::endl;
    if (amount >= this->_hitpoints)
        this->_hitpoints = 0;
    else
        this->_hitpoints -= amount;
    if (this->_hitpoints == 0)
        std::cout << "ScavTrap " << this->_name << " has died 🫠" << std::endl;
    else
        std::cout << "ScavTrap " << this->_name << " has " << this->_hitpoints << " hitpoints left." << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " cannot be repaired without energy 😫" << std::endl;
        return;
    }
    if (this->_hitpoints <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " is dead and cannot be repaired 🫠" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->_name << " is being repaired by " << amount << " points ❤️‍🩹" << std::endl;
    this->_hitpoints += amount;
    this->_energyPoints -= 1;
    std::cout << "ScavTrap " << this->_name << " has " << this->_hitpoints << " hitpoints now." << std::endl;
}
*/
