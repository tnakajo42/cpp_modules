/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:57:42 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/04 19:15:12 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed()
{
	std::cout<< "Default constructor called" << std::endl;
	_val = 0;
}

Fixed::Fixed( const Fixed &num )
{
	std::cout<< "Copy constructor called" << std::endl;
	this->_val = num.getRawBits();
}

Fixed::~Fixed()
{
	std::cout<< "Destructor called" << std::endl;
}

Fixed &Fixed::operator=( const Fixed &num )
{
	std::cout<< "Copy assignment operator called" << std::endl;
	if (this != &num)
		this->_val = num.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout<< "getRawBits member function called" << std::endl;
	return this->_val;
}

void Fixed::setRawBits( const int raw )
{
    std::cout << "setRawBits member function called" << std::endl;
	this->_val = raw;
}
