
#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int	main(void)
{
	Account	_1(42);
	Account	_2(54);
	Account	_3(957);
	Account	_4(432);
	Account	_5(1234);
	Account	_6(0);
	Account	_7(754);
	Account	_8(16576);

	std::cout << std::endl;

	Account::displayAccountsInfos();

	std::cout << std::endl;
	std::cout << std::endl;

	_1.displayStatus();
	_2.displayStatus();
	_3.displayStatus();
	_4.displayStatus();
	_5.displayStatus();
	_6.displayStatus();
	_7.displayStatus();
	_8.displayStatus();

	std::cout << std::endl;
	std::cout << std::endl;

	_1.makeDeposit(5);
	_2.makeDeposit(765);
	_3.makeDeposit(564);
	_4.makeDeposit(2);
	_5.makeDeposit(87);
	_6.makeDeposit(23);
	_7.makeDeposit(9);
	_8.makeDeposit(20);

	std::cout << std::endl;

	Account::displayAccountsInfos();

	std::cout << std::endl;
	std::cout << std::endl;

	_1.displayStatus();
	_2.displayStatus();
	_3.displayStatus();
	_4.displayStatus();
	_5.displayStatus();
	_6.displayStatus();
	_7.displayStatus();
	_8.displayStatus();

	std::cout << std::endl;
	std::cout << std::endl;

	_1.makeWithdrawal(321);
	_2.makeWithdrawal(34);
	_3.makeWithdrawal(657);
	_4.makeWithdrawal(4);
	_5.makeWithdrawal(76);
	_6.makeWithdrawal(275);
	_7.makeWithdrawal(657);
	_8.makeWithdrawal(7654);

	std::cout << std::endl;

	Account::displayAccountsInfos();

	std::cout << std::endl;
	std::cout << std::endl;

	_1.displayStatus();
	_2.displayStatus();
	_3.displayStatus();
	_4.displayStatus();
	_5.displayStatus();
	_6.displayStatus();
	_7.displayStatus();
	_8.displayStatus();

	std::cout << std::endl;
	std::cout << std::endl;

	return (0);
}