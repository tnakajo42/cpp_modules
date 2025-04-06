/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:10:58 by tnakajo           #+#    #+#             */
/*   Updated: 2025/04/05 20:42:30 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stdexcept>

template <typename T>
typename T::iterator	easyfind(T &container, int val)
{
	typename T::iterator	iter = std::find(container.begin(), container.end(), val);
	if (iter == container.end())
		throw	std::runtime_error("The val is NOT in container.");
	return iter;
}
