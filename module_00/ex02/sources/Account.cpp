#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

Account::Account(int initial_deposit) : _accountIndex(Account::_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += _amount;
	return;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
	return;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout	<< "accounts:" << _nbAccounts
				<< ";total:" << _totalAmount
				<< ";deposits:" << _totalNbDeposits
				<< ";withdrawals:" << _totalNbWithdrawals
				<< std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int		_amount_old;
	
	_amount_old = _amount;
	_nbDeposits++;
	_amount += deposit;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";p_amount:" << _amount_old
				<< ";deposit:" << deposit
				<< ";amount:" << _amount
				<< ";nb_deposits:" << _nbDeposits
				<< std::endl;
}

int		Account::checkAmount(void) const
{
	return (this->_amount);
}

bool	Account::makeWithdrawal(int withdrawal)
{	
	_displayTimestamp();
	std::cout	<< "index:"			<< _accountIndex	<< ";";
	std::cout	<< "p_amount:"		<< _amount			<< ";";
	
	if (checkAmount() < withdrawal)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return 1;
	}

	_nbWithdrawals++;
	_amount -= withdrawal;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	
	std::cout	<< "withdrawal:"	<< 	withdrawal		<< ";";
	std::cout	<< "amount:"		<< _amount			<< ";";
	std::cout	<< "nb_withdrawals:"<< _nbWithdrawals	<< ";";
	std::cout	<< std::endl;
	return 0;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";deposits:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals
				<< std::endl;
}

void	Account::_displayTimestamp(void)
{
	const time_t time = std::time(NULL);
	tm *tm = std::localtime(&time);
	
	std::cout	<< "["
				<< std::setfill('0') << std::setw(4) << tm->tm_year + 1900
				<< std::setfill('0') << std::setw(2) << tm->tm_mon + 1
				<< std::setfill('0') << std::setw(2) << tm->tm_mday
				<< "_"
				<< std::setfill('0') << std::setw(2) << tm->tm_hour
				<< std::setfill('0') << std::setw(2) << tm->tm_min
				<< std::setfill('0') << std::setw(2) << tm->tm_sec
				<< "] ";
	return;
}

int	Account::getNbAccounts(void)	{ return (Account::_nbAccounts); }
int	Account::getTotalAmount(void)	{ return (Account::_totalAmount); }
int	Account::getNbDeposits(void)	{ return (Account::_totalNbDeposits); }
int	Account::getNbWithdrawals(void)	{ return (Account::_totalNbWithdrawals); }

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
