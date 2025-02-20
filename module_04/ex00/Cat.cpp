/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:55:20 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/20 19:22:37 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    this->type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &to_copy) : Animal(to_copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    if (this != &to_copy)
        *this = to_copy;
}

Cat &Cat::operator=(Cat const &original)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &original)
        this->type = original.type;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "<<" << this->type << ">> Meow~!🐈" << std::endl;
}
