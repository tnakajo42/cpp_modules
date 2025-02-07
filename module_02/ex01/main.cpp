/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:15:48 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/05 17:31:23 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	// Default constructor called
	Fixed a;
	// Int constructor called
	Fixed b( 10 );
	// Float constructor called
	Fixed c( 42.42f );
	// Copy constructor called
	Fixed d( b );

    // Float constructor called
	// Copy assignment operator called
	a = Fixed( 1234.4321f );
    // Destructor called

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	// a is 1234.43
    // b is 10
    // c is 42.4219
    // d is 10

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	// a is 1234 as integer
    // b is 10 as integer
    // c is 42 as integer
    // d is 10 as integer

    // Destructor called
    // Destructor called
    // Destructor called
    // Destructor called
	return 0;
}
