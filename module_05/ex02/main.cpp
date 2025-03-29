/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:06:18 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/28 22:51:37 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

int main(void)
{
	std::cout << "\n___________________________A Pokémon Bureaucracy Adventure Begins...\n" << std::endl;

	Bureaucrat charizard("Charizard", 10);  // High rank (low grade)
	Bureaucrat pikachu("Pikachu", 50);      // Mid-tier rank
	Bureaucrat caterpie("Caterpie", 150);   // Low rank (high grade)

	PresidentialPardonForm pardon("TeamRocket");      // Sign: 25, Exec: 5
	RobotomyRequestForm robotomy("Mewtwo");           // Sign: 72, Exec: 45
	ShrubberyCreationForm shrubbery("VictreeForest"); // Sign: 145, Exec: 137

	std::cout << "Default Trainer: " << caterpie << "\n" << std::endl;

	try
	{
		// [1. Grade Limit Test]
		std::cout << "[1. TOO HIGH & TOO LOW]___________________________" << std::endl;
		try {
			PresidentialPardonForm tooHigh("Legendary Pardon", 0, 0);
		} catch (const AForm::GradeTooHighException& e) {
			std::cout << "Caught: " << e.what() << " - No form can exceed the Champion's rank!" << std::endl;
		}
		try {
			ShrubberyCreationForm tooLow("Weak Shrubbery", 151, 151);
		} catch (const AForm::GradeTooLowException& e) {
			std::cout << "Caught: " << e.what() << " - Even Magikarp has more power!" << std::endl;
		}

		// [2. Charizard Signs and Executes a Pardon]
		std::cout << "\n[2. CHARIZARD'S PARDON]___________________________" << std::endl;
		charizard.signForm(pardon);    // Grade 10 can sign (req. 25)
		charizard.executeForm(pardon); // Grade 10 can execute (req. 5)
		std::cout << pardon << std::endl;

		// [3. Pikachu Tries Robotomy]
		std::cout << "\n[3. PIKACHU'S ROBOTOMY ATTEMPT]___________________________" << std::endl;
		pikachu.signForm(robotomy);    // Grade 50 can sign (req. 72)
		pikachu.executeForm(robotomy); // Grade 50 can execute (req. 45)
		std::cout << robotomy << std::endl;

		// [4. Caterpie Fails Shrubbery]
		std::cout << "\n[4. CATERPIE'S SHRUBBERY STRUGGLE]___________________________" << std::endl;
		caterpie.signForm(shrubbery);  // Grade 150 fails (req. 145)
		std::cout << shrubbery << std::endl;

		// [5. Charizard Saves the Day]
		std::cout << "\n[5. CHARIZARD TO THE RESCUE]___________________________" << std::endl;
		charizard.signForm(shrubbery);   // Grade 10 succeeds
		charizard.executeForm(shrubbery); // Grade 10 succeeds
		std::cout << shrubbery << std::endl;

		// [6. Unsigned Form Test]
		std::cout << "\n[6. UNSIGNED FORM CHALLENGE]___________________________" << std::endl;
		PresidentialPardonForm unsignedPardon("Giovanni");
		charizard.executeForm(unsignedPardon); // Should fail (not signed)
	}
	catch (const AForm::GradeTooHighException& e) {
		std::cout << "Battle Error: " << e.what() << std::endl;
	}
	catch (const AForm::GradeTooLowException& e) {
		std::cout << "Battle Error: " << e.what() << std::endl;
	}
	catch (const AForm::ExecuteNotSigned& e) {
		std::cout << "Battle Error: " << e.what() << std::endl;
	}
	catch (const AForm::FileOpeningFail& e) {
		std::cout << "Battle Error: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << "Trainer Error: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << "Trainer Error: " << e.what() << std::endl;
	}

	std::cout << "\n...The Pokémon World is Saved!___________________________\n" << std::endl;
	return 0;
}
