/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:04:38 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/24 14:54:12 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *      ClapTrap
 *     /        \
 * ScavTrap    FragTrap
 *     \        /
 *     DiamondTrap
 */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap // virtual keyword added
{
public:
    ScavTrap(void); // default constructor
    ScavTrap(std::string name); // constructor with name parameter
    ScavTrap(const ScavTrap &_ScavTrap); // copy constructor
    ScavTrap& operator=(const ScavTrap &_ScavTrap); // assignment operator
    ~ScavTrap(); // destructor

    // void attack(std::string const & target);
    virtual bool attack(std::string const & target);
    void guardGate(void);


protected:
    unsigned int getAttackDamage(void) const;
    unsigned int getEnergyPoints(void) const;
    unsigned int getHitpoints(void) const;
    // virtual unsigned int getAttackDamage(void) const;
    // virtual unsigned int getEnergyPoints(void) const;
    // virtual unsigned int getHitpoints(void) const;
    void setAttackDamage(unsigned int amount);
};