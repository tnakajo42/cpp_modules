/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:13:03 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/07 16:15:02 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

Point::Point( void ) : _x(0), _y(0) {}
Point::Point( float const x, float const y ) : _x(x), _y(y) {}
Point::Point( Point const &copy ) : _x(copy.getX()), _y(copy.getY()) {}
Point::~Point( void ) {}

Point&  Point::operator=( Point const &original )
{
	(Fixed)this->_x = original.getX();
	(Fixed)this->_y = original.getY();
	return *this;
}

Fixed	Point::getX( void ) const
{
	return this->_x;
}

Fixed	Point::getY( void ) const
{
	return this->_y;
}
