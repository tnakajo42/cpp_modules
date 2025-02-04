/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:26:08 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/03 15:27:53 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void	Harl::complain(std::string level)
{
	int	i;

	i = 0;
	void	(Harl::*complain[4])(void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string	levels[4] = 
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	while (i < 4)
	{
		if (level == levels[i])
		{
			(this->*complain[i])();
			break;
		}
		i++;
	}
	if (i == 4)
		std::cout << "Harl cannot be complaining..." << std::endl;
}

void	Harl::debug(void)
{
	std::cout << DEBUG_MSG << std::endl;
}

void	Harl::info(void)
{
	std::cout << INFO_MSG << std::endl;
}

void	Harl::warning(void)
{
	std::cout << WARNING_MSG << std::endl;
}

void	Harl::error(void)
{
	std::cout << ERROR_MSG << std::endl;
}
