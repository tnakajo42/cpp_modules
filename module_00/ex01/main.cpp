/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:01:56 by tnakajo           #+#    #+#             */
/*   Updated: 2025/01/29 13:42:03 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <string>
using namespace std;

int main(void)
{
	Phonebook	phonebook;
	int			command;
	string		input;

	while (42)
	{
		cout << "Enter command (ADD, SEARCH or EXIT)" << endl;
		cin >> input;
		cin.ignore(); /** Discard leftover newline */
		command = phonebook.getCommand(input);
		switch (command)
		{
			case Phonebook::ADD:
				phonebook.addNewContact();
				break;
			case Phonebook::SEARCH:
				phonebook.searchContact();
				break;
			case Phonebook::EXIT:
				return 0;
			default:
				cout << "Invalid command, enter new one!" << endl;
		}
	}
}
