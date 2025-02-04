/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:04:36 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/02 19:32:00 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once /** no need for #ifndef / #define / #endif) */

#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;
	
	public:
		HumanB( std::string name );
		~HumanB( void );	
		Weapon*	getWeapon( void ) const;
		void	setWeapon( Weapon &weapon );
		void	attack( void );
		const	std::string& getName( void ) const;
};
