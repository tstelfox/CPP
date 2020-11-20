/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 14:07:04 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/20 13:29:42 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.class.hpp"

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

Account::Account ( int initial_deposit ) : _accountIndex(getNbAccounts()), _amount(initial_deposit) {
	
	_nbAccounts++;
	_totalAmount += _amount;
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";created" << std::endl;
}

Account::~Account () {

	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";closed" << std::endl;
}

void	Account::displayStatus ( void ) const {

	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";deposits:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals
				<< std::endl;
}

int		Account::getNbAccounts ( void ) {
	return (_nbAccounts);
}

int		Account::getTotalAmount ( void ) {
	return (_totalAmount);
}

void	Account::displayAccountsInfos ( void ) {
	
	std::cout	<< "accounts:" << _nbAccounts
				<< ";total:" << _totalAmount
				<< ";deposits:" << _totalNbDeposits
				<< ";withdrawals:" << _totalNbWithdrawals
				<< std::endl;
}

void	Account::makeDeposit ( int deposit ) {

	std::cout	<< "index:" << _accountIndex
				<< ";p_amount:" << _amount
				<< ";deposit:" << deposit;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout	<< ";amount" << _amount
				<< ";nb_deposits:" << _nbDeposits
				<< std::endl;
}

bool	Account::makeWithdrawal ( int withdrawal ) {
	
	std::cout	<< "index:" << _accountIndex
				<< ";p_amount:" << _amount;

	if (_amount < withdrawal)
	{
		std::cout << ";withdrawal: refused (ye povvo)" << std::endl;
		return (false);
	}
	else
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout	<< ";withdrawal:" << withdrawal
					<< ";amount" << _amount
					<< ";nb_withdrawals:" << _nbWithdrawals
					<< std::endl;
		return (true);
	}
}
