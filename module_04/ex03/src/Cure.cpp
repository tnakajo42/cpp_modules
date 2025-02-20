/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:33:21 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/20 18:41:14 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
    // std::cout << "Cure constructor called" << std::endl;
    this->_type = AMateria::getType();
}

Cure::Cure(Cure const &to_copy) : AMateria(to_copy)
{
    // std::cout << "Cure copy constructor called" << std::endl;
    *this = to_copy;
}

Cure::~Cure()
{
    // std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &original)
{
    if (this != &original)
    {
        this->_type = original._type;
    }
    return *this;
}

AMateria *Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
