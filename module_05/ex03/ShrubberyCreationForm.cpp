/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:13:24 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/28 22:41:41 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

void	ShrubberyCreationForm::execute(Bureaucrat const &oth) const
{
	std::ofstream	file;

	this->AForm::exeCheck(oth);
	std::string fileName = _target.empty() ? "default_target" : _target;
	file.open((fileName + "_shrubbery").c_str());
	if (!file.is_open())
		throw FileOpeningFail();
	std::string ascii_tree =
	"\t\t                        \\  |  /    \n"
	"\t\t                         .-*-.\n"
	"\t\t                      ---(   )---\n"
	"\t\t                         `-*-'\n"
	"\t\t                        /  |  \\\n"
	"                     ,@@@@@@@,\n"
	"             ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
	"          ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
	"         ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
	"         %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
	"         %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
	"         `&%\\ ` /%&'    |.|        \\ '|8'\n"
	"             |o|        | |         | |\n"
	"             |.|        | |         | |\n"
	"        \\\\/ ._\\/_/__/  ,\\_//__\\\\/.  \\_//__/_ \n"
	"                ||||||||||||||||||||||\n"
	"             ___|||||||||||||||||||||||___\n"
	"            /______________________________\\\n"
	"           /________________________________\\\n";
	file << ascii_tree;
	file.close();
}
