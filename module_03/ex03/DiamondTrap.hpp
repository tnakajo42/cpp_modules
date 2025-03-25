/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:54:11 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/24 18:57:56 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;

public:
    DiamondTrap(void); // default constructor
    DiamondTrap(std::string name); // constructor with name parameter
    DiamondTrap(const DiamondTrap &_DiamondTrap); // copy constructor
    DiamondTrap& operator=(const DiamondTrap &_DiamondTrap); // assignment operator
    ~DiamondTrap(); // destructor

    // bool ScavTrap::attack(std::string const & target);
    // bool ScavTrap::attack;
    bool attack(std::string const & target);
    void whoAmI(void);
};
