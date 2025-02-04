/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:04:36 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/02 19:48:03 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once /** no need for #ifndef / #define / #endif) */

#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	_name;
		Weapon &_weapon;

	public:
		HumanA( std::string name, Weapon &weapon );
		~HumanA( void );
		void attack( void );
		const std::string&	getName() const;
		const Weapon&		getWeapon() const;
};
