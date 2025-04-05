/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:44:34 by tnakajo           #+#    #+#             */
/*   Updated: 2025/04/03 22:57:43 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

/**
 * Develop a class template Array that contains elements of type T and that implements
	the following behavior and functions:
	• Construction with no parameter: Creates an empty array.
	• Construction with an unsigned int n as a parameter: Creates an array of n elements
		initialized by default.
	Tip: Try to compile int * a = new int(); then display *a.
	• Construction by copy and assignment operator. In both cases, modifying either the
		original array or its copy after copying musn’t affect the other array.
	• You MUST use the operator new[] to allocate memory.Preventive allocation (allocating
		memory in advance) is forbidden. Your program must never access nonallocated memory.
	• Elements can be accessed through the subscript operator: [ ].
	• When accessing an element with the [ ] operator, if its index is out of bounds, an
		std::exception is thrown.
	• A member function size() that returns the number of elements in the array. This
		member function takes no parameters and must not modify the current instance.
 */

template <typename T>
class Array
{
private:
	T				*_array;
	unsigned int	_size;

public:
	Array();
	~Array();
	Array(unsigned int i);
	Array(const Array &oth);
	
	Array			&operator=(const Array &rhs);
	T				&operator[](unsigned int i);
	// const T			&operator[](unsigned int i) const;
	unsigned int	size() const;
};
 
#include "../Array.tpp"
 