/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:04:31 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/02 19:58:05 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    _name = name;
    _weapon = NULL;
}

HumanB::~HumanB( void ) {}

Weapon* HumanB::getWeapon( void ) const {
	return (this->_weapon);
} 

void HumanB::setWeapon(Weapon &type)
{
    _weapon = &type;
}

void HumanB::attack( void )
{
	std::cout << getName() << " attacks with their ";
	if (getWeapon())
		std::cout << _weapon->getType(); 
	else
		std::cout << "fists";
	std::cout << std::endl;
}

const std::string& HumanB::getName() const {
	return (this->_name);
}
