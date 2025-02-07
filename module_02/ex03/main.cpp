/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:15:48 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/07 17:33:05 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

using std::cout;
using std::endl;

int	main( void ) {

	Point	a(1, 30);
	Point	b(5, 0);
	Point	c(20, 0);

	Point	testPoint(0, 1);
	if (bsp( a, b, c, testPoint) == true) {
		cout << "Point is in the triangle." << endl;
	} else {
		cout << "Point is not inside the triangle." << endl;
	}

	return 0;
}

/** https://www.geeksforgeeks.org/check-whether-a-given-point-lies-inside-a-triangle-or-not/ */
