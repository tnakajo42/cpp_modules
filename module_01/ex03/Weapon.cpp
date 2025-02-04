/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:04:31 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/02 19:52:15 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
	this->_type = type;
}

Weapon::~Weapon( void ) {}

const std::string	Weapon::getType( void ) const
{
	return (_type);
}

void	Weapon::setType( std::string type )
{
	this->_type = type;
}
