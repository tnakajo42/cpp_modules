/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:16:26 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/05 17:44:47 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath> /** for roundf() */
#include <sstream> /** for std::stringstream */

class	Fixed
{
	private:
		int					_val;
		static const int	_bits;
		
	public:
		Fixed( void ); /** default constructor */
		Fixed( int const intNum ); /** int constructor */
		Fixed( float const floatNum ); /** float constructor */
		Fixed( const Fixed &num ); /** copy constructor */
		~Fixed( void ); /** destructor */
		Fixed	&operator=( const Fixed &num ); /** copy assignment operator */
		int		getRawBits( void ) const; /** returns the raw value of the fixed point value */
		void	setRawBits( int const raw ); /** [DIDN't USE again] sets the raw value of the fixed point value */
		float	toFloat( void ) const; /** converts the fixed point value to a floating point value */
		int		toInt( void ) const;   /** converts the fixed point value to an integer value */
};

std::ostream &operator<<(std::ostream &out, const Fixed &_fixed);
