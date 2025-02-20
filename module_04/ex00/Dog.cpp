/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:21:32 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/20 19:22:21 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    if (this != &src)
        *this = src;
}

Dog &Dog::operator=(Dog const &dg)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &dg)
        this->type = dg.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "<<" << this->type << ">> Woof? 🐕" << std::endl;
}
