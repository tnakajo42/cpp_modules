/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:37:50 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/19 15:39:45 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "Animal type constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    if (this != &src)
        *this = src;
}

Animal &Animal::operator=(Animal const &ani)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &ani)
        this->type = ani.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

// pure virtual function (Abstract class)
// This function is not defined in this class, but in the derived classes
// void Animal::makeSound() const
// {
//     std::cout << "Animal sound... but who am I?" << std::endl;
// }

std::string Animal::getType() const
{
    return this->type;
}
