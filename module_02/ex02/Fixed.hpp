/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:16:26 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/06 19:17:56 by tnakajo          ###   ########.fr       */
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
		
		/** arithmetic operators */
		Fixed	operator+( const Fixed &num ) const;
		Fixed	operator-( const Fixed &num ) const;
		Fixed	operator*( const Fixed &num ) const;
		Fixed	operator/( const Fixed &num ) const;

		/** increment/decrement operators */
		Fixed	&operator++( void );
		Fixed	operator++( int );
		Fixed	&operator--( void );
		Fixed	operator--( int );

		/** comparison operators */
		bool	operator>( const Fixed &num ) const;
		bool	operator<( const Fixed &num ) const;
		bool	operator>=( const Fixed &num ) const;
		bool	operator<=( const Fixed &num ) const;
		bool	operator==( const Fixed &num ) const;
		bool	operator!=( const Fixed &num ) const;

		/** min/max
		 * returns the reference to the smallest of the two values */
		static Fixed	&min( Fixed &num1, Fixed &num2 );
		/** returns the reference to the smallest of the two values */
		static const Fixed	&min( const Fixed &num1, const Fixed &num2 );
		/** returns the reference to the largest of the two values */
		static Fixed	&max( Fixed &num1, Fixed &num2 );
		/** returns the reference to the largest of the two values */
		static const Fixed	&max( const Fixed &num1, const Fixed &num2 );
};

std::ostream &operator<<(std::ostream &out, const Fixed &_fixed);
