/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:04:31 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/02 19:47:49 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {}
HumanA::~HumanA(){}

const std::string &HumanA::getName() const {
	return (this->_name);
}

const Weapon& HumanA::getWeapon() const {
	return (this->_weapon);
}

void	HumanA::attack( void )
{
	std::cout << getName() << " attacks with their ";
	std::cout << getWeapon().getType() << std::endl;
}
