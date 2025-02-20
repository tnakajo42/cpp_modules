/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:49:45 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/20 19:25:12 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    if (this != &src)
        *this = src;
}

WrongCat &WrongCat::operator=(WrongCat const &ct)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    if (this != &ct)
        this->_type = ct._type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

/*
void WrongCat::makeSound() const
{
    std::cout << "<<" << this->_type << ">> Nyaaa!🐈" << std::endl;
}
*/
