/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:08:03 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/15 18:32:57 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
    FragTrap(void); // default constructor
    FragTrap(std::string name); // constructor with name parameter
    FragTrap(const FragTrap &_FragTrap); // copy constructor
    FragTrap& operator=(const FragTrap &_FragTrap); // assignment operator
    ~FragTrap(); // destructor

    void highFivesGuys(void);
};
