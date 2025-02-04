/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FindReplace.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:22:02 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/03 13:16:25 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <cstdlib>

class FindReplace
{
	private:
		std::string _infile;
		std::string _outfile;

    public:
        FindReplace(std::string filename);
        ~FindReplace();
        void replace(std::string s1, std::string s2);
};
