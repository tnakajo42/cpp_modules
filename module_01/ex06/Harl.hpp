/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:26:01 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/03 16:03:22 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>

# define DEBUG_MSG		"[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n"
# define INFO_MSG		"[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did,\nI wouldn't be asking for more!\n"
# define WARNING_MSG	"[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n"
# define ERROR_MSG		"[ ERROR ]\nThis is unacceptable!\nI want to speak to the manager now.\n"
# define OTHER_MSG		"[ Probably complaining about insignificant problems ]"

class	Harl
{
	public:
		Harl( void );
		~Harl( void );
		void	harlFilter( std::string level );

	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};
