/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:26:08 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/03 16:02:54 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void	Harl::harlFilter(std::string level)
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
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			(this->*complain[0])();
			(this->*complain[1])();
			(this->*complain[2])();
			(this->*complain[3])();
			break;
		case 1:
			(this->*complain[1])();
			(this->*complain[2])();
			(this->*complain[3])();
			break;
		case 2:
			(this->*complain[2])();
			(this->*complain[3])();
			break;
		case 3:
			(this->*complain[3])();
			break;
		default:
			std::cout << OTHER_MSG << std::endl;
			break;
	}
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
