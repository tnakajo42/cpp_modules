/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:54:11 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/17 16:36:11 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
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

    bool attack(std::string const & target);
    void whoAmI(void);
};
