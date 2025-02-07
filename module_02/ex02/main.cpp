/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:15:48 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/06 19:00:01 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	// 0
	std::cout << a << std::endl;
	// 0.00390625
	std::cout << ++a << std::endl;
	// 0.00390625
	std::cout << a << std::endl;
	// 0.00390625
	std::cout << a++ << std::endl;
	// 0.0078125
	std::cout << a << std::endl;
	// 10.1016
	std::cout << b << std::endl;
	// 10.1016
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
