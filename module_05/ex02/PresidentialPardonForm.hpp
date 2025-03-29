/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:20:58 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/28 22:48:21 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

/**
 * PresidentialPardonForm: Required grades: sign 25, exec 5
 * Informs that <target> has been pardoned by Zaphod Beeblebrox.
 */

class PresidentialPardonForm : public AForm
{
private:
	const std::string	_target;
	PresidentialPardonForm& operator=(PresidentialPardonForm const &oth);

public:
	PresidentialPardonForm() : AForm("Presidential Pardon", 25, 5), _target("Unknown") {};
	PresidentialPardonForm(PresidentialPardonForm const &oth) : AForm(oth), _target(oth._target) {};
	PresidentialPardonForm(std::string const &oth) :
		AForm("Presidential Pardon", 25, 5), _target(oth) {};
	PresidentialPardonForm(std::string const &name, int sign, int exec) : AForm(name, sign, exec), _target("TestTarget") {};
	
	virtual ~PresidentialPardonForm() {};

	void execute(Bureaucrat const &oth) const;
};
