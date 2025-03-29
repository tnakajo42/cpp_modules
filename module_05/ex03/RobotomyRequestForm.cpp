/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:13:24 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/28 21:25:48 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &oth)
{
	(void)oth;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &oth) const
{
	int i;

	i = rand() % 2;
	this->AForm::exeCheck(oth);
	if (i)
		std::cout << _target << " has been robotomized. (successfully 50\% of the time)" << std::endl;
	else
		std::cout << _target << " has not been robotomized. (the robotomy failed)" << std::endl;
}
