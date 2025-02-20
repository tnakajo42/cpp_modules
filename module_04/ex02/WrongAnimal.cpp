/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:35:46 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/18 16:21:16 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    if (this != &src)
        *this = src;
    
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &ani)
{
    std::cout << "WrongAnimal assistatopn operator called" << std::endl;
    if (this != &ani)
        this->_type = ani._type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "I know I am WrongAnimal... but who are you?" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->_type;
}
