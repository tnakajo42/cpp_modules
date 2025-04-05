/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:39:57 by tnakajo           #+#    #+#             */
/*   Updated: 2025/04/03 23:10:27 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "./inc/Array.hpp"

/**
 * Develop a class template Array that contains elements of type T and that implements
	the following behavior and functions:
	• Construction with no parameter: Creates an empty array.
	• Construction with an unsigned int n as a parameter: Creates an array of n elements
		initialized by default.
		Tip: Try to compile int * a = new int(); then display *a.
	• Construction by copy and assignment operator. In both cases, modifying either the
		original array or its copy after copying musn’t affect the other array.
	• You MUST use the operator new[] to allocate memory. Preventive allocation (allocating
		memory in advance) is forbidden. Your program must never access nonallocated memory.
	• Elements can be accessed through the subscript operator: [ ].
	• When accessing an element with the [ ] operator, if its index is out of bounds, an
		std::exception is thrown.
	• A member function size() that returns the number of elements in the array. This
		member function takes no parameters and must not modify the current instance.
 */

template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {} // Creates an empty array

template <typename T>
Array<T>::~Array() { delete[] _array; } // Destructor to prevent memory leaks

template <typename T>
Array<T>::Array(unsigned int i) : _array(new T[i]()), _size(i) {} // Creates an array of n elements

template <typename T>
Array<T>::Array(const Array &oth) : _array(new T[oth._size]), _size(oth._size) // deep copying
{
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = oth._array[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &rhs) // copied arrays
{
	if (this != &rhs)
	{
		delete[] _array;
		_size = rhs._size;
		_array = new T[rhs._size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = rhs._array[i];
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int i) // Subscript Operator
{
	if (i >= _size)
		throw std::out_of_range("operator[]: Index's out of bounds");
	return _array[i];
}

// template <typename T>
// const T &Array<T>::operator[](unsigned int i) const
// {
// 	if (i >= _size)
// 		throw std::out_of_range("index out of range");
// 	return _array[i];
// }

template <typename T>
unsigned int Array<T>::size() const { return _size; } // Returns the number of elements in the array
