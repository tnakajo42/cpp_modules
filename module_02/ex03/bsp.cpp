/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:13:40 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/07 16:30:18 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed abs( Fixed x )
{
	if (x < 0)
		return x * -1;
	return x;
}

static Fixed traiangleArea( Point const a, Point const b, Point const c )
{
    Fixed area = (a.getX() * (b.getY() - c.getY()) \
                + b.getX() * (c.getY() - a.getY()) \
                + c.getX() * (a.getY() - b.getY())) / 2;
    return abs(area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point )
{
    Fixed abcArea = traiangleArea(a, b, c);
    Fixed pabArea = traiangleArea(point, a, b);
    Fixed pbcArea = traiangleArea(point, b, c);
    Fixed pacArea = traiangleArea(point, a, c);

    if (pabArea == 0 || pbcArea == 0 || pacArea == 0)
        return false;
    if (abcArea != pabArea + pbcArea + pacArea)
        return false;
    return true;
}

