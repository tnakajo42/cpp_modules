/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:56:15 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/04 19:13:40 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Fixed
{
	private:
		int					_val;
		static const int	_bits;
		
	public:
		Fixed( void ); /** default constructor */
		Fixed( const Fixed &num ); /** copy constructor */
		~Fixed( void ); /** destructor */
		Fixed &operator=( const Fixed &num ); /** copy assignment operator */
		int getRawBits( void ) const; /** returns the raw value of the fixed point value */
		void setRawBits( int const raw ); /** [DIDN'T USE] sets the raw value of the fixed point value */
};
