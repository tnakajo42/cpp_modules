/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:13:24 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/28 17:16:08 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern	&Intern::operator=(Intern const &oth)
{
	(void)oth;
	return *this;
}

AForm*	Intern::makeForm(std::string form_name, std::string form_target)
{
	std::string forms[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	size_t i;
	for (i = 0; i < 3; i++)
	{
		if (form_name == forms[i])
			break;
	}
	switch (i)
	{
	case 0:
		std::cout << "Intern creates " << form_name << std::endl;
		return new ShrubberyCreationForm(form_target);
	case 1:
		std::cout << "Intern creates " << form_name << std::endl;
		return new RobotomyRequestForm(form_target);
	case 2:
		std::cout << "Intern creates " << form_name << std::endl;
		return new PresidentialPardonForm(form_target);
	default:
		std::cout << "Intern is not allowed to create " << form_name << std::endl;
		return NULL;
	}
}
