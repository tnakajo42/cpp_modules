/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:02:05 by tnakajo           #+#    #+#             */
/*   Updated: 2025/01/29 16:54:28 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>
using namespace std;

class	Contact
{   
	private:
		int		_index;
		string	_firstName;
		string	_lastName;
		string	_nickName;
		string	_phoneNumber;
		string	_secretInfo;

	public:
		Contact() : _index(0) {}

		bool inputDigit(string string)
		{
			for (int i = 0; string[i] != 0;  ++i)
			{
				if (!isdigit(string[i]))
					return false;
			}
			return true;
		}

		bool checkAlpha(string string)
		{
			for (int i = 0; string[i] != 0;  ++i)
			{
				if (!isalpha(string[i]))
					return false;
			}
			return true;
		}

		void setIndex(int Index)
		{
			_index = Index;
		}

		void setFirstName()
		{
			while (42)
			{
				cout << "Enter first name: ";
				getline(cin, _firstName);
				if (_firstName.empty())
					cout << "No empty input, please.\n";
				else if (!checkAlpha(_firstName))
					cout << "Input must be alphabet.\n";
				else
					break ;
			}
		}

		void setLastName()
		{
			while(42)
			{
				cout << "Enter last name: ";
				getline(cin, _lastName);
				if (_lastName.empty())
					cout << "No empty input, please.\n";
				else if (!checkAlpha(_lastName))
					cout << "Input must be alphabet.\n";
				else
					break ;
			}
		}

		void setNickName()
		{
			cout << "Enter nickname: ";
			getline(cin, _nickName);
		}

		void setPhoneNumber()
		{

			while(42)
			{
				cout << "Enter phone number: ";
				getline(cin, _phoneNumber);
				if (_phoneNumber.empty())
					cout << "No empty input, please.\n";
				else if (!inputDigit(_phoneNumber))
					cout << "Input must be number.\n";
				else
					break ;
			}
		}

		void setDarkestSecret()
		{
			cout << "Enter darkest secret: ";
			getline(cin, _secretInfo);
		}

		void displayContact()
		{
			cout << "First Name: " << _firstName << endl;
			cout << "Last Name: " << _lastName << endl;
			cout << "Nickname: " << _nickName << endl;
			cout << "Phone Number: " << _phoneNumber << endl;
			cout << "Darkest Secret: " << _secretInfo << endl;
		}

		int getIndex()
		{
			return _index;
		}

		string getFirstName()
		{
			return _firstName;
		}

		string getLastName()
		{
			return _lastName;
		}

		string getNickName()
		{
			return _nickName;
		}

		string getPhoneNumber()
		{
			return _phoneNumber;
		}

		string getSecretInfo()
		{
			return _secretInfo;
		}
};

#endif
