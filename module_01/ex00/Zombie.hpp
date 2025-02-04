/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:41:12 by tnakajo           #+#    #+#             */
/*   Updated: 2025/01/31 16:48:31 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream> /** std::cout, std::cin, std::endl */

class	Zombie
{
	private:
		std::string	_name;	
	
	public:
		Zombie( std::string name );
		void announce( void );
		~Zombie( void );	
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
