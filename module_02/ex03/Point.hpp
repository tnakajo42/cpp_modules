/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:13:21 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/07 16:00:22 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"

class Point
{
    private:
        Fixed const _x;
        Fixed const _y;

    public:
        Point( void );
        Point( float const x, float const y );
        Point( Point const &copy );
        ~Point( void );

        Point&  operator=( Point const &original );

        Fixed	getX( void ) const;
        Fixed	getY( void ) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point );
