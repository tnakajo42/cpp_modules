/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:44:34 by tnakajo           #+#    #+#             */
/*   Updated: 2025/04/05 16:49:56 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

/**
 * Implement the following function templates:
	• swap: Swaps the values of two given parameters. Does not return anything.
	• min: Compares the two values passed as parameters and returns the smallest one.
		If they are equal, it returns the second one.
	• max: Compares the two values passed as parameters and returns the greatest one.
		If they are equal, it returns the second one.
 */

template <typename T>
void	swap(T &a, T &b)
{
	T	result;

	result = a;
	a = b;
	b = result;
}

template <typename T>
T const min(T &a, T &b)
{
	T	result;

	if (a < b) 
		result = a;
	else
		result = b;
	return (result);
}

template <typename T>
T const max(T &a, T &b)
{
	T	result;

	if (a > b) 
		result = a;
	else
		result = b;
	return (result);
}
