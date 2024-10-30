/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:01:56 by tnakajo           #+#    #+#             */
/*   Updated: 2024/10/30 19:07:30 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <string>

int main(void)
{
    Phonebook   phonebook;
    int         command;
    std::string input;

    while (42)
    {
        std::cout << "Enter command (ADD, SEARCH or EXIT)" << std::endl;
        std::cin >> input;

        std::cin.ignore();
        command = phonebook.getCommand(input);
        switch (command)
        {
            case phonebook.ADD:
                phonebook.add();
                break;

            case phonebook.SEARCH:
                phonebook.search(input);
                break;

            case phonebook.EXIT:
                phonebook.exit();
                return 0;

            default:
            std::cout << "Invalid command, enter new one!" << std::endl;
        }
    }
}
