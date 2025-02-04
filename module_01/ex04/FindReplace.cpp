/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FindReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:17:00 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/03 13:53:53 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FindReplace.hpp"

FindReplace::FindReplace(std::string filename)
{
	this->_infile = filename;
	this->_outfile = this->_infile + ".replace";
}

FindReplace::~FindReplace() {}

void	FindReplace::replace(std::string toFind, std::string toReplace)
{
	std::ifstream	infile(this->_infile.c_str());
	std::ofstream	outfile(this->_outfile.c_str());
	std::string		content;
	size_t			pos;

	if (!infile.is_open())
	{
		std::cerr << "Error: Cannot open file." << std::endl;
		exit(EXIT_FAILURE);
	}
	if (std::getline(infile, content, '\0'))
	{
		pos = content.find(toFind);
		while (pos != std::string::npos)
		{
			content.erase(pos, toFind.length());
			content.insert(pos, toReplace);
			pos = content.find(toFind);
		}
		outfile << content;
		outfile.close();
	}
	else
		std::cerr << "Error: File is empty." << std::endl;
	infile.close();
}
