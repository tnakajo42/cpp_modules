/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Spark.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:33:24 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/20 18:41:30 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Spark.hpp"

Spark::Spark(void) : AMateria("spark")
{
    // std::cout << "Spark constructor called" << std::endl;
    this->_type = AMateria::getType();
}

Spark::Spark(Spark const &to_copy) : AMateria(to_copy)
{
    // std::cout << "Spark copy constructor called" << std::endl;
    *this = to_copy;
}

Spark::~Spark()
{
    // std::cout << "Spark destructor called" << std::endl;
}

Spark &Spark::operator=(Spark const &original)
{
    if (this != &original)
    {
        this->_type = original._type;
    }
    return *this;
}

AMateria *Spark::clone() const
{
    return new Spark(*this);
}

void Spark::use(ICharacter &target)
{
    std::cout << "* shoots an Spark at " << target.getName() << " 65 damages *" << std::endl;
}

/**
 * Spark: "* attacks <name> 65 damages *"
 * Thunder: "* attacks <name> 110 damages *" 
 * ThunderBolt: "* attacks <name> 90 damages *"
 * ThunderShock: "* attacks <name> 40 damages *"
 * ThunderWave: "* attacks <name> 0 damages *"
 * https://pokemondb.net/pokedex/pikachu
 */
