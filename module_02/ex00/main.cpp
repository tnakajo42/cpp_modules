/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:54:16 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/04 19:07:35 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	// Default constructor called
    Fixed a;
    // Copy constructor called
    Fixed b( a );
    // Default constructor called
    Fixed c;

    // Copy assignment operator called
    c = b;

    // getRawBits member function called
    // 0
    std::cout << a.getRawBits() << std::endl;
    // getRawBits member function called
    // 0
    std::cout << b.getRawBits() << std::endl;
    // getRawBits member function called
    // 0
    std::cout << c.getRawBits() << std::endl;

    return 0;
}
