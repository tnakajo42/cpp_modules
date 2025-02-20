/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Thunder.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:33:24 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/20 18:41:30 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Thunder.hpp"

Thunder::Thunder(void) : AMateria("thunder")
{
    // std::cout << "Thunder constructor called" << std::endl;
    this->_type = AMateria::getType();
}

Thunder::Thunder(Thunder const &to_copy) : AMateria(to_copy)
{
    // std::cout << "Thunder copy constructor called" << std::endl;
    *this = to_copy;
}

Thunder::~Thunder()
{
    // std::cout << "Thunder destructor called" << std::endl;
}

Thunder &Thunder::operator=(Thunder const &original)
{
    if (this != &original)
    {
        this->_type = original._type;
    }
    return *this;
}

AMateria *Thunder::clone() const
{
    return new Thunder(*this);
}

void Thunder::use(ICharacter &target)
{
    std::cout << "* shoots an Thunder at " << target.getName() << " 110 damages *" << std::endl;
}

/**
 * Spark: "* attacks <name> 65 damages *"
 * Thunder: "* attacks <name> 110 damages *" 
 * ThunderBolt: "* attacks <name> 90 damages *"
 * ThunderShock: "* attacks <name> 40 damages *"
 * ThunderWave: "* attacks <name> 0 damages *"
 * https://pokemondb.net/pokedex/pikachu
 */
