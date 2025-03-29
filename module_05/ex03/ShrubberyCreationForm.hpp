/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:20:58 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/28 22:48:56 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <fstream> // file stream
#include "AForm.hpp"

/**
 * ShrubberyCreationForm: Required grades: sign 145, exec 137
 * Creates a file <target>_shrubbery in the working directory and writes ASCII trees inside it.
 */

class ShrubberyCreationForm : public AForm
{
private:
	const std::string	_target;
	ShrubberyCreationForm& operator=(ShrubberyCreationForm const &oth);

public:
	ShrubberyCreationForm() : AForm("Shrubbery Creation", 145, 137), _target("Unknown") {};
	ShrubberyCreationForm(std::string const &oth) : AForm("Shrubbery Creation", 145, 137), _target(oth) {};
	ShrubberyCreationForm(ShrubberyCreationForm const &oth) : AForm(oth), _target(oth._target) {};
	ShrubberyCreationForm(std::string const &name, int sign, int exec) : AForm(name, sign, exec), _target("TestTarget") {};
	virtual ~ShrubberyCreationForm() {};

	void execute(Bureaucrat const &oth) const;
};
