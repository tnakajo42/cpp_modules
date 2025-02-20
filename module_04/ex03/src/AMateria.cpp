/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:33:16 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/20 18:40:33 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria() : _type("default") {}
AMateria::AMateria(std::string const &type) : _type(type) {}
AMateria::AMateria(AMateria const &to_copy) : _type(to_copy._type) {}
AMateria::~AMateria() {}

AMateria &AMateria::operator=(AMateria const &original)
{
    if (this == &original)
        return (*this);
    _type = original._type;
    return (*this);
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter &target)
{
    // std::cout << "AMateria abstract class use() called" << std::endl;
    (void)target;
}
