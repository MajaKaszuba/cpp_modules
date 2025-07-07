// ************************************************************************** //
//                                                                            //
//                Account.cpp for GlobalBanksters United                      //
//                Created on  : Thu Nov 20 20:02:22 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include "Account.hpp"

#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) {
	return _nbAccounts;
}

int Account::getTotalAmount(void) {
	return _totalAmount;
}

int Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() //liczba utworzonych kont
	          << ";total:" << getTotalAmount() //laczna suma pieniedzy na wszystkich kontach
	          << ";deposits:" << getNbDeposits() //laczna liczba wplat w systemie
	          << ";withdrawals:" << getNbWithdrawals() //laczna liczba wyplat
	          << std::endl;
}

Account::Account(int initial_deposit)
	: _accountIndex(_nbAccounts++), _amount(initial_deposit), //amount(initial_deposit) ustawia poczatkowe saldo konta
	  _nbDeposits(0), _nbWithdrawals(0) { //wplaty i wyplaty na poczatku to 0
	_totalAmount += initial_deposit; //zwieksza sume pieniedzy
	_displayTimestamp(); //pokazuje date i godzine
	std::cout << "index:" << _accountIndex //informacja o utworzeniu konta
	          << ";amount:" << _amount
	          << ";created" << std::endl;
}

Account::~Account(void) { //destruktor (konto znika z pamieci programu gdy sie konczy)
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	          << ";amount:" << _amount
	          << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit) { //dodaje pieniadze do konta
	_displayTimestamp();
	int previous_amount = _amount;
	_amount += deposit;               // dodaj do konta
	_nbDeposits++;                    // zwiększ licznik na tym koncie
	_totalAmount += deposit;         // zwiększ łączną kwotę w systemie
	_totalNbDeposits++;              // globalny licznik wpłat
	std::cout << "index:" << _accountIndex
	          << ";p_amount:" << previous_amount
	          << ";deposit:" << deposit
	          << ";amount:" << _amount
	          << ";nb_deposits:" << _nbDeposits
	          << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) { //wyplaca apieniadze z konta
	_displayTimestamp();
	if (_amount >= withdrawal) {
		int previous_amount = _amount;
		_amount -= withdrawal;           // zmniejsz saldo
		_nbWithdrawals++;                // zwiększ lokalny licznik
		_totalAmount -= withdrawal;      // zmniejsz globalną sumę
		_totalNbWithdrawals++;           // globalny licznik wypłat
		std::cout << "index:" << _accountIndex
		          << ";p_amount:" << previous_amount
		          << ";withdrawal:" << withdrawal
		          << ";amount:" << _amount
		          << ";nb_withdrawals:" << _nbWithdrawals
		          << std::endl;
		return true;
	} else {
		std::cout << "index:" << _accountIndex
		          << ";p_amount:" << _amount
		          << ";withdrawal:refused" << std::endl; //jak nie ma srodkow na koncie
		return false;
	}
}

int Account::checkAmount(void) const {
	return _amount;
}

void Account::displayStatus(void) const { //wypisuje aktualny stan konta
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	          << ";amount:" << _amount
	          << ";deposits:" << _nbDeposits
	          << ";withdrawals:" << _nbWithdrawals
	          << std::endl;
}

void Account::_displayTimestamp(void) {
	std::time_t now = std::time(NULL);
	std::tm* localTime = std::localtime(&now);
	char buffer[20];
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", localTime);
	std::cout << buffer << " ";
}
