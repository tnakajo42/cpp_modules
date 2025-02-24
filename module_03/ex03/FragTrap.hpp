/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:08:03 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/18 16:25:48 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap // virtual keyword added
{
public:
    FragTrap(void); // default constructor
    FragTrap(std::string name); // constructor with name parameter
    FragTrap(const FragTrap &_FragTrap); // copy constructor
    FragTrap& operator=(const FragTrap &_FragTrap); // assignment operator
    ~FragTrap(); // destructor

    void highFivesGuys(void);

    virtual unsigned int getAttackDamage(void) const;
    virtual unsigned int getEnergyPoints(void) const;
    virtual unsigned int getHitpoints(void) const;
};
