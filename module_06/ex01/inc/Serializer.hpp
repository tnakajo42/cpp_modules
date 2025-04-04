/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 21:46:17 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/31 23:07:16 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <stdint.h>

struct Data {
	int	val;
};

class Serializer
{
private:
	Serializer();
	~Serializer();
	Serializer(const Serializer& oth);
	Serializer& operator=(const Serializer& oth);

public:
	static uintptr_t	serualize(Data* ptr);
	static Data*		deserialize(uintptr_t);
};
