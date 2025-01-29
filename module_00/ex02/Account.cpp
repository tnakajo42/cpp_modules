/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:59:34 by tnakajo           #+#    #+#             */
/*   Updated: 2025/01/29 15:22:08 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"
using namespace std;

// Initialize static members
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Static member function implementations
int Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int Account::getTotalAmount(void)
{
	return _totalAmount;
}

int Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void Account::_displayTimestamp(void)
{
	time_t now = time(NULL);
	tm* ltm = localtime(&now);
	cout << "[" 
		<< setfill('0') << setw(4) << 1900 + ltm->tm_year
		<< setfill('0') << setw(2) << 1 + ltm->tm_mon
		<< setfill('0') << setw(2) << ltm->tm_mday
		<< "_"
		<< setfill('0') << setw(2) << ltm->tm_hour
		<< setfill('0') << setw(2) << ltm->tm_min
		<< setfill('0') << setw(2) << ltm->tm_sec
		<< "] ";
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	cout << "accounts:" << _nbAccounts << ";"
		<< "total:" << _totalAmount << ";"
		<< "deposits:" << _totalNbDeposits << ";"
		<< "withdrawals:" << _totalNbWithdrawals << endl;
}

// Constructor
Account::Account(int initial_deposit) : 
	_accountIndex(_nbAccounts),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
	{
		_nbAccounts++;
		_totalAmount += initial_deposit;
		_displayTimestamp();
		cout << "index:" << _accountIndex << ";"
			<< "amount:" << _amount << ";"
			<< "created" << endl;
	}

// Destructor
Account::~Account(void)
{
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "closed" << endl;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "deposits:" << _nbDeposits << ";"
		<< "withdrawals:" << _nbWithdrawals << endl;
}

void Account::makeDeposit(int deposit)
{
	int p_amount = _amount;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";"
		<< "p_amount:" << p_amount << ";"
		<< "deposit:" << deposit << ";"
		<< "amount:" << _amount << ";"
		<< "nb_deposits:" << _nbDeposits << endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";"
		<< "p_amount:" << _amount << ";"
		<< "withdrawal:";
	if (_amount < withdrawal)
	{
		cout << "refused" << endl;
		return false;
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	cout << withdrawal << ";"
		<< "amount:" << _amount << ";"
		<< "nb_withdrawals:" << _nbWithdrawals << endl;
	return true;
}

int Account::checkAmount(void) const
{
    return _amount;
}
