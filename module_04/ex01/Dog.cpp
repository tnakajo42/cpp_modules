/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:21:32 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/19 15:21:32 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
    this->brain = new Brain();
}

Dog::Dog(Dog const &src) : Animal("Dog"), brain(new Brain())
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
    for (int i = 0; i < 100; i++)
        this->brain->setIdea(dg.brain->getIdea(i), i);
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    if (this->brain)
    {
        delete this->brain;
        this->brain = NULL;
    }
}

void Dog::makeSound() const
{
    std::cout << "<<" << this->type << ">> Woof? 🐕" << std::endl;
}

Brain* Dog::getBrain() const
{
    return this->brain;
}
