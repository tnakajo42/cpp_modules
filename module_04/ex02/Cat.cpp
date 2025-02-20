/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:55:20 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/20 19:26:04 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain())
{
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &src) : Animal(src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    if (this != &src)
        *this = src;
    this->brain = new Brain(*src.brain);
}

Cat &Cat::operator=(Cat const &ct)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &ct)
        this->type = ct.type;
    for (int i = 0; i < 100; i++)
        this->brain->setIdea(ct.brain->getIdea(i), i);
    return *this;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "<<" << this->type << ">> Meow~!🐈" << std::endl;
}

Brain* Cat::getBrain() const
{
    return this->brain;
}
