/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ThunderShock.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:33:24 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/20 18:41:30 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ThunderShock.hpp"

ThunderShock::ThunderShock(void) : AMateria("thunderShock")
{
    // std::cout << "ThunderShock constructor called" << std::endl;
    this->_type = AMateria::getType();
}

ThunderShock::ThunderShock(ThunderShock const &to_copy) : AMateria(to_copy)
{
    // std::cout << "ThunderShock copy constructor called" << std::endl;
    *this = to_copy;
}

ThunderShock::~ThunderShock()
{
    // std::cout << "ThunderShock destructor called" << std::endl;
}

ThunderShock &ThunderShock::operator=(ThunderShock const &original)
{
    if (this != &original)
    {
        this->_type = original._type;
    }
    return *this;
}

AMateria *ThunderShock::clone() const
{
    return new ThunderShock(*this);
}

void ThunderShock::use(ICharacter &target)
{
    std::cout << "* shoots an Thunder Shock at " << target.getName() << " 40 damages *" << std::endl;
}

/**
 * Spark: "* attacks <name> 65 damages *"
 * Thunder: "* attacks <name> 110 damages *" 
 * ThunderBolt: "* attacks <name> 90 damages *"
 * ThunderShock: "* attacks <name> 40 damages *"
 * ThunderWave: "* attacks <name> 0 damages *"
 * https://pokemondb.net/pokedex/pikachu
 */
