/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ThunderBolt.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:33:24 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/20 18:41:30 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ThunderBolt.hpp"

ThunderBolt::ThunderBolt(void) : AMateria("thunderBolt")
{
    // std::cout << "ThunderBolt constructor called" << std::endl;
    this->_type = AMateria::getType();
}

ThunderBolt::ThunderBolt(ThunderBolt const &to_copy) : AMateria(to_copy)
{
    // std::cout << "ThunderBolt copy constructor called" << std::endl;
    *this = to_copy;
}

ThunderBolt::~ThunderBolt()
{
    // std::cout << "ThunderBolt destructor called" << std::endl;
}

ThunderBolt &ThunderBolt::operator=(ThunderBolt const &original)
{
    if (this != &original)
    {
        this->_type = original._type;
    }
    return *this;
}

AMateria *ThunderBolt::clone() const
{
    return new ThunderBolt(*this);
}

void ThunderBolt::use(ICharacter &target)
{
    std::cout << "* shoots an Thunderbolt at " << target.getName() << " 90 damages *" << std::endl;
}

/**
 * Spark: "* attacks <name> 65 damages *"
 * Thunder: "* attacks <name> 110 damages *" 
 * ThunderBolt: "* attacks <name> 90 damages *"
 * ThunderShock: "* attacks <name> 40 damages *"
 * ThunderWave: "* attacks <name> 0 damages *"
 * https://pokemondb.net/pokedex/pikachu
 */
