/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:24:52 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/12 17:11:22 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap
{
protected:
    std::string     _name; // which is passed as parameter to a constructor
    unsigned int    _hitpoints; // (10), represent the health of the ClapTrap
    unsigned int    _energyPoints; // (10)
    unsigned int    _attackDamage; // (0)
public:
    ClapTrap(void); // default constructor
    ClapTrap(std::string name); // constructor with name parameter
    ClapTrap(const ClapTrap &_ClapTrap); // copy constructor
    ClapTrap& operator=(const ClapTrap &_ClapTrap); // assignment operator
    ~ClapTrap(); // destructor

    // void attack(std::string const & target);
    bool attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    unsigned int getAttackDamage(void) const;
    unsigned int setAttackDamage(unsigned int amount);
};
