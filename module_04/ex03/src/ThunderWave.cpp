/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ThunderWave.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:33:21 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/20 21:21:41 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ThunderWave.hpp"

ThunderWave::ThunderWave(void) : AMateria("thunderWave")
{
    // std::cout << "ThunderWave constructor called" << std::endl;
    this->_type = AMateria::getType();
}

ThunderWave::ThunderWave(ThunderWave const &to_copy) : AMateria(to_copy)
{
    // std::cout << "ThunderWave copy constructor called" << std::endl;
    *this = to_copy;
}

ThunderWave::~ThunderWave()
{
    // std::cout << "ThunderWave destructor called" << std::endl;
}

ThunderWave &ThunderWave::operator=(ThunderWave const &original)
{
    if (this != &original)
    {
        this->_type = original._type;
    }
    return *this;
}

AMateria *ThunderWave::clone() const
{
    return new ThunderWave(*this);
}

void ThunderWave::use(ICharacter &target)
{
    std::cout << "* try to use Thunder Wave " << target.getName() << " but it looks fail to damages *" << std::endl;
}

/**
 * Spark: "* attacks <name> 65 damages *"
 * Thunder: "* attacks <name> 110 damages *" 
 * ThunderBolt: "* attacks <name> 90 damages *"
 * ThunderShock: "* attacks <name> 40 damages *"
 * ThunderWave: "* attacks <name> 0 damages *"
 * https://pokemondb.net/pokedex/pikachu
 */
