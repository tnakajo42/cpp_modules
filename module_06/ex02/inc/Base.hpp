/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 21:46:17 by tnakajo           #+#    #+#             */
/*   Updated: 2025/04/01 20:37:38 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <exception>

class Base
{
public:
	virtual ~Base();	
};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);
