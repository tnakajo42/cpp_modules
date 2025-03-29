/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:06:18 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/28 22:42:06 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "\n___________________________A world begins...\n"<< std::endl;
	Bureaucrat defaultBureaucrat;
	std::cout << "Default: " << defaultBureaucrat << "\n" << std::endl;
	try
	{
		std::cout << "[0. TOO HIGH & TOO LOW]___________________________"<< std::endl;
		try {
			Form tooHigh("TooHigh", 0, 0);
		} catch (const Form::GradeTooHighException& e) {
			std::cout << "Caught: " << e.what() << std::endl;
		}
		try {
			Form tooLow("TooLow", 151, 151);
		} catch (const Form::GradeTooLowException& e) {
			std::cout << "Caught: " << e.what() << std::endl;
		}

		Bureaucrat utsubot("Victreebel", 71);
		Form dragon("Dragonite", 149, 149);
		std::cout << "[1. SUCESS]___________________________"<< std::endl;
		utsubot.signForm(dragon);
		
		Form pika("Pikachu", 25, 25);
		std::cout << "[2. FAIL]___________________________"<< std::endl;
		utsubot.signForm(pika);

		std::cout << "[3. CHECK PIKACHU]___________________________"<< std::endl;
		Form mewtwo("MewTwo", 150, 150);
		Form ivysaur("Ivysaur", 2, 2);
		std::cout << pika << std::endl;

		std::cout << "[4. CHECK DRAGONITE]___________________________"<< std::endl;
		std::cout << dragon << std::endl;

		std::cout << "[5. CHECK MEWTWO]___________________________"<< std::endl;
		std::cout << mewtwo << std::endl;
		
		std::cout << "[6. CHECK VICTREEBEL]___________________________"<< std::endl;
		std::cout << utsubot << std::endl;
		
	} catch (const Form::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	} catch (const Form::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n...The world saved___________________________\n"<< std::endl;
	return 0;
}