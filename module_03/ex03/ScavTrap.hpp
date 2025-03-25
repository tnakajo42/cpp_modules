/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:04:38 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/25 19:55:14 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap // virtual keyword added
{
private:

public:
    ScavTrap(void); // default constructor
    ScavTrap(std::string name); // constructor with name parameter
    ScavTrap(const ScavTrap &_ScavTrap); // copy constructor
    ScavTrap& operator=(const ScavTrap &_ScavTrap); // assignment operator
    ~ScavTrap(); // destructor

    // void attack(std::string const & target);
    bool attack(std::string const & target);
    void guardGate(void);

    unsigned int getAttackDamage(void) const;
    unsigned int setAttackDamage(unsigned int amount);
};