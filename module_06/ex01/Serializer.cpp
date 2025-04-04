/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 21:46:10 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/31 23:04:49 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * reinterpret_cast is the most dangerous cast, and should be used very sparingly.
 * It turns one type directly into another
 * — such as casting the value from one pointer to another, 
 * or storing a pointer in an int, or all sorts of other nasty things.
 * Largely, the only guarantee you get with reinterpret_cast is that normally 
 * if you cast the result back to the original type, you will get the exact same value 
 * (but not if the intermediate type is smaller than the original type). 
 * There are a number of conversions that reinterpret_cast cannot do, too. 
 * It's often abused for particularly weird conversions and bit manipulations, 
 * like turning a raw data stream into actual data, 
 * or storing data in the low bits of a pointer to aligned data. 
 * For those cases, see std::bit_cast.
 */

#include "./inc/Serializer.hpp"

Serializer::Serializer() {}
Serializer::~Serializer() {}
Serializer::Serializer(const Serializer& oth) { (void)oth; }
Serializer& Serializer::operator=(const Serializer& oth)
{
	(void)oth;
	return *this;
}

uintptr_t Serializer::serualize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}
