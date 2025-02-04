/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:26:01 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/03 15:05:21 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>

# define DEBUG_MSG		"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!"
# define INFO_MSG		"I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did,\nI wouldn't be asking for more!"
# define WARNING_MSG	"I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month."
# define ERROR_MSG		"This is unacceptable!\nI want to speak to the manager now."

class	Harl
{
	public:
		Harl( void );
		~Harl( void );
		void	complain( std::string level );

	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};
