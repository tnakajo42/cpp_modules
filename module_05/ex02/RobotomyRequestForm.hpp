/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:20:58 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/28 22:30:44 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <cstdlib>  // Added for rand()

/**
 * RobotomyRequestForm: Required grades: sign 72, exec 45
 * Makes some drilling noises, then informs that <target> has been robotomized
 * successfully 50% of the time. Otherwise, it informs that the robotomy failed.
 */

class RobotomyRequestForm : public AForm
{
private:
	const std::string	_target;

public:
	RobotomyRequestForm() : AForm("Robotomy Request", 72, 45), _target("Unknown") {};
	RobotomyRequestForm(RobotomyRequestForm const &oth) : AForm(oth), _target(oth._target) {};
	RobotomyRequestForm(std::string const &oth) :
		AForm("Robotomy Request", 72, 45), _target(oth) {};
	virtual ~RobotomyRequestForm() {};

	RobotomyRequestForm& operator=(RobotomyRequestForm const &oth);
	void execute(Bureaucrat const &oth) const;
};
