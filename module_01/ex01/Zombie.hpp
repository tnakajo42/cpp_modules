/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:41:12 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/01 20:52:58 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream> /** std::cout, std::cin, std::endl */
# include <cstdlib> /** atoi */

class	Zombie
{
	private:
		std::string	_name;	
	
	public:
		Zombie( void );
		std::string getName( void );
		void setName( std::string name );
		void announce( void );
		~Zombie( void );	
};

Zombie*	zombieHorde( int N, std::string name );

#endif
