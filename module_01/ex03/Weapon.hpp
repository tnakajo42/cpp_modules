/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:04:36 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/02 19:52:02 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once /** no need for #ifndef / #define / #endif) */

#include <iostream> /** std::cout, std::cin, std::endl */

class	Weapon
{
	private:
		std::string	_type;	

	public:
		Weapon( std::string type );
		~Weapon( void );
		const std::string getType( void ) const;
		void setType( std::string type );
};
