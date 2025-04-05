/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:44:34 by tnakajo           #+#    #+#             */
/*   Updated: 2025/04/03 22:39:19 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

/**
 * Implement a function template iter that takes 3 parameters and returns nothing.
	• The first parameter is the address of an array.
	• The second one is the length of the array.
	• The third one is a function that will be called on every element of the array
 */

template <typename T, typename F>
void	iter(T array[], size_t length, F func) // same as void (*func)(T&))
{
	for (size_t i = 0; i < length; i++)
		func(array[i]);
	std::cout << std::endl;
}

template <typename T>
void	printFunc(T val)
{
	std::cout << val << " ";
}
