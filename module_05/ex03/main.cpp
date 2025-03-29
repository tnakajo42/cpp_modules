/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 15:22:50 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/29 20:41:05 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

int	main(void)
{
	std::srand(std::time(NULL)); // Seed for random robotomy outcomes
	std::cout << "\n___________________________A Pokémon Intern Adventure Begins...\n" << std::endl;

	Bureaucrat	satoshi("Ash Ketchum", 1); // High rank
	Bureaucrat	kasumi("Misty", 50);        // Mid-tier rank
	Bureaucrat	takeshi("Brock", 150);      // Low rank

	Intern		pokeIntern;

	AForm*		pardonForm		= pokeIntern.makeForm("presidential pardon", "TeamRocket");
	AForm*		robotomyForm 	= pokeIntern.makeForm("robotomy request", "MewTwo");
	AForm*		shrubberyForm	= pokeIntern.makeForm("shrubbery creation", "BellSprout");
	AForm*		invalidForm		= pokeIntern.makeForm("invalid form", "NoWhere");

	// Test the forms with Pokémon bureaucrats
	if (pardonForm)
	{
		std::cout << "\n--- Ash(Satoshi) tries to pardon Team Rocket ---\n";
		satoshi.signForm(*pardonForm);    // Grade 10 > 25, should succeed
		satoshi.executeForm(*pardonForm); // Grade 10 > 5, should succeed
		delete pardonForm;
	}

	if (robotomyForm)
	{
		std::cout << "\n--- Misty(Kasumi) attempts to robotomize Mewtwo ---\n";
		kasumi.signForm(*robotomyForm);    // Grade 50 > 72, should succeed
		kasumi.executeForm(*robotomyForm); // Grade 50 > 45, should succeed
		delete robotomyForm;
	}

	if (shrubberyForm)
	{
		std::cout << "\n--- Brock(Takeshi) tries to plant a shrubbery in Viridian Forest ---\n";
		takeshi.signForm(*shrubberyForm);  // Grade 150 < 145, should fail
		satoshi.signForm(*shrubberyForm);    // Ash signs it (grade 10 > 145)
		satoshi.executeForm(*shrubberyForm); // Ash executes it (grade 10 > 137)
		delete shrubberyForm;
	}

	if (invalidForm)
	{
		// Won’t execute since invalidForm is NULL
		delete invalidForm;
	}
	else
	{
		std::cout << "\n--- The intern shrugs: 'No form, no problem!' ---\n";
	}

	std::cout << "\n...The Pokémon World is Saved by Interns!___________________________\n" << std::endl;
	return 0;
}
