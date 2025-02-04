/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:26:32 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/03 15:09:19 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
	Harl	harl;

	std::cout << "______DEBUG_____________________" << std::endl;
	harl.complain("DEBUG");
	std::cout << "______INFO______________________" << std::endl;
	harl.complain("INFO");
	std::cout << "______WARNING___________________" << std::endl;
	harl.complain("WARNING");
	std::cout << "______ERROR_____________________" << std::endl;
	harl.complain("ERROR");
	std::cout << "______BraiiiiiiinnnzzzZ...______" << std::endl;
	harl.complain("BraiiiiiiinnnzzzZ...");
	return (EXIT_SUCCESS);
}
