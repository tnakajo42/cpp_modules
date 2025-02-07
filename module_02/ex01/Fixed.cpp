/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:16:20 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/05 17:45:34 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed() : _val(0)
{
	std::cout << "Default constructor called" << std::endl;
	// _val = 0;
}

Fixed::Fixed( int const intNum )
{
	std::cout << "Int constructor called" << std::endl;
	this->_val = intNum << this->_bits;
}

// (1 << 8) = 2^8 = 256
// roundf() : rounding result to the nearest integer
Fixed::Fixed( float const floatNum )
{
	std::cout << "Float constructor called" << std::endl;
	// this->_val = floatNum * (1 << 8);
	// rounds a floating-point number to the nearest integer value
	this->_val = static_cast<int>(roundf(floatNum * (1 << this->_bits))); 
}

Fixed::Fixed( const Fixed &num ) : _val(num._val)
{
	std::cout << "Copy constructor called" << std::endl;
	// *this = num;
	// this->_val = num.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=( const Fixed &num )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &num)
		this->setRawBits(num.getRawBits());
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_val;
}

void Fixed::setRawBits( const int raw )
{
    // std::cout << "setRawBits member function called" << std::endl;
	this->_val = raw;
}

float Fixed::toFloat( void ) const
{
	return (float)this->_val / (1 << this->_bits);
}

int Fixed::toInt( void ) const
{
	return this->_val >> this->_bits;
}

// The operator<< overload for the Fixed class you provided is designed to output a Fixed object
// to an output stream, using the toFloat function to convert the fixed-point value to a floating-point representation
std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	std::stringstream	ss;

	// Insert the 'num.toFloat()' representation into the output 'out' stream
	ss << fixed.toFloat();
	out << ss.str();  
	return out;
}
