/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:33:24 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/20 18:41:30 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
    // std::cout << "Ice constructor called" << std::endl;
    this->_type = AMateria::getType();
}

Ice::Ice(Ice const &to_copy) : AMateria(to_copy)
{
    // std::cout << "Ice copy constructor called" << std::endl;
    *this = to_copy;
}

Ice::~Ice()
{
    // std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(Ice const &original)
{
    if (this != &original)
    {
        this->_type = original._type;
    }
    return *this;
}

AMateria *Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
