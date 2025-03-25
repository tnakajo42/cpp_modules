/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:24:49 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/25 20:47:50 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hitpoints(defaultHitPoints), _energyPoints(defaultEnergyPoints), _attackDamage(defaultAttackDamage)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(defaultHitPoints), _energyPoints(defaultEnergyPoints), _attackDamage(defaultAttackDamage)
{
    std::cout << "ClapTrap " << _name << " has appeared." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &_ClapTrap)
{
    *this = _ClapTrap;
    std::cout << "copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &_ClapTrap)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &_ClapTrap)
        return (*this);
    this->_name = _ClapTrap._name;
    this->_hitpoints = _ClapTrap._hitpoints;
    this->_energyPoints = _ClapTrap._energyPoints;
    this->_attackDamage = _ClapTrap._attackDamage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " has disappeared." << std::endl;
}

bool ClapTrap::attack(std::string const & target)
{
    if (this->_hitpoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead and cannot attack." << std::endl;
        return (false);
    }
    else if (this->_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " has no energy left and cannot attack." << std::endl;
        return (false);
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage." << std::endl;
    this->_energyPoints -= 1;
    std::cout << "ClapTrap " << this->_name << " has " << this->_energyPoints << " energy points left." << std::endl;
    return (true);
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitpoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is already dead." << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage." << std::endl;
    if (amount >= this->_hitpoints)
        this->_hitpoints = 0;
    else
        this->_hitpoints -= amount;
    if (this->_hitpoints == 0)
        std::cout << "ClapTrap " << this->_name << " has died." << std::endl;
    else
        std::cout << "ClapTrap " << this->_name << " has " << this->_hitpoints << " hitpoints left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " cannot be repaired without energy." << std::endl;
        return;
    }
    if (this->_hitpoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead and cannot be repaired." << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " is being repaired by " << amount << " points." << std::endl;
    this->_hitpoints += amount;
    this->_energyPoints -= 1;
    std::cout << "ClapTrap " << this->_name << " has " << this->_hitpoints << " hitpoints now." << std::endl;
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
    return (this->_attackDamage);
}

unsigned int	ClapTrap::setAttackDamage(unsigned int amount)
{
    this->_attackDamage = amount;
    return (this->_attackDamage);
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
    return (_energyPoints);
}

// std::string	ClapTrap::getName(void) const
// {
//     return (this->_name);
// }

// std::string	ClapTrap::setName(std::string name)
// {
//     this->_name = name;
//     return (this->_name);
// }