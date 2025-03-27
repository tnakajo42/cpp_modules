/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:06:18 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/27 19:58:26 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "\n___________________________A world begins...\n"<< std::endl;
	Bureaucrat defaultBureaucrat;
	std::cout << "Default: " << defaultBureaucrat << "\n" << std::endl;
	try
	{
		Bureaucrat low("Dragonite", 149);
		std::cout << "Initial: " << low << "\n";
		low.demote();
		std::cout << "After first demotion: " << low << std::endl;
		low.demote();
	}
	catch (const Bureaucrat::GradeTooLowException& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat high("Ivysaur", 2);
		std::cout << "Initial: " << high << "\n";
		high.promote();
		std::cout << "After first promotion: " << high << std::endl;
		high.promote();
	}
	catch (const Bureaucrat::GradeTooHighException& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << "\n...The world saved___________________________\n"<< std::endl;
	return 0;
}
