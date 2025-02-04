/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:28:33 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/03 13:58:21 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FindReplace.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./super_sed <filename> <old_string> <new_string>" << std::endl;
		return (EXIT_FAILURE); // 1
	}
	FindReplace	findRep(argv[1]);
	findRep.replace(argv[2], argv[3]);
	return (EXIT_SUCCESS); // 0
}
