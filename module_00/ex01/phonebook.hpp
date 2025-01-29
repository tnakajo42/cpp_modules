/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:52:28 by tnakajo           #+#    #+#             */
/*   Updated: 2025/01/29 13:47:09 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "contact.hpp"
using namespace std;

class	Phonebook
{
	private:
		Contact	_contacts[8];
		int		_index;

	public:
		Phonebook() : _index(0) {}

		enum Command {
			ADD,
			SEARCH,
			EXIT,
			INVALID
		};

		Command getCommand(string input)
		{
			if (input == "ADD")
				return ADD;
			if (input == "SEARCH")
				return SEARCH;
			if (input == "EXIT")
				return EXIT;
			return INVALID;
		}

		void addNewContact()
		{
			cout << "Add new contact" << endl;
			if (_index != 8)
			{
				_contacts[_index].setIndex(_index);
				_contacts[_index].setFirstName();
				_contacts[_index].setLastName();
				_contacts[_index].setNickName();
				_contacts[_index].setPhoneNumber();
				_contacts[_index].setDarkestSecret();
				++_index;
			}
			else
			{
				_contacts[0].setIndex(0);
				_contacts[0].setFirstName();
				_contacts[0].setLastName();
				_contacts[0].setNickName();
				_contacts[0].setPhoneNumber();
				_contacts[0].setDarkestSecret();
			}
		}

		string stringFormat(string String)
		{
			string modString;
			if (String.length() > 10)
				modString = String.substr(0, 9) + ".";
			else
				modString = String;
			return modString;
		}

		void searchContact()
		{
			string input;
			bool found = false;
			cout << "Enter index: ";
			cin >> input;
			for (int i = 0; i < 8; ++i)
			{
				if (_contacts[i].getFirstName().empty())
					break ;
				if (input.length() > 1)
				{
					cout << "Invalid Input\n";
					return ;
				}
				if ((input[0] - 48) == _contacts[i].getIndex())
				{
					_contacts[i].displayContact();
					found = true;
					break ;
				}
			}
			cout << endl << "__ALL Phonebook Contacts DATA__" << endl;
			cout << right << setw(10) << "Index";
			cout << " | " << right << setw(10) << "First Name";
			cout << " | " << right << setw(10) << "Last Name";
			cout << " | " << right << setw(10) << "Nick Name" << endl;
			for (int i = 0; i < _index; ++i)
			{
				cout << right << setw(10) << _contacts[i].getIndex();
				cout << " | " << right << setw(10) << stringFormat(_contacts[i].getFirstName()) << flush;
				cout << " | " << right << setw(10) << stringFormat(_contacts[i].getLastName()) << flush;
				cout << " | " << right << setw(10) << stringFormat(_contacts[i].getNickName()) << endl;
			}
			if (!found)
				cout << "Person not found" << endl;
		}
};

#endif
