/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:40:13 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/01 20:41:33 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	std::cout << "Zombie was born🧟" << std::endl;
}

std::string	Zombie::getName( void )
{
	return this->_name;
}

void	Zombie::setName( std::string name )
{
	this->_name = name;
}

void	Zombie::announce( void )
{
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << getName();
    std::cout << " died" << std::endl;
}
