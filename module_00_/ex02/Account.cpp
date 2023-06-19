# include "Account.hpp"
# include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void) {}

void Account::_displayTimestamp(void) {
    time_t      now;
    char        buf[80];
    struct tm  tstruct;
    
    now = time(NULL);
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%G%m%M_%H%M%S", &tstruct);
    std::cout << "[" + std::string(buf) + "]";
}

Account::Account(int initial_deposit) : _amount(initial_deposit) {
    Account::_displayTimestamp();
    _accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbDeposits = _nbWithdrawals = 0;
    std::cout << " index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    puts("created");
}

Account::~Account(void) {
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    puts("closed");
}

int     Account::getNbAccounts( void ) {
    return (_nbAccounts);
}

int     Account::getTotalAmount( void ) {
        return (_totalAmount);
}

int	    Account::getNbDeposits( void ) {
        return (_totalNbDeposits);
}

int	    Account::getNbWithdrawals( void ) {
        return (_totalNbWithdrawals);
}

void    Account::displayAccountsInfos( void ) {
    Account::_displayTimestamp();
    std::cout << " index:" << Account::getNbAccounts() << ";";
    std::cout << "total:" << Account::getTotalAmount() << ";";
    std::cout << "deposits:" << Account::getNbDeposits() << ";";
    std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;

}

void    Account::displayStatus( void ) const 
{
    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex << ";";
    std::cout << " amount:" << _amount << ";";
    std::cout << " deposits:" << _nbDeposits << ";";
    std::cout << " withdrawals:" << _nbWithdrawals << "\n";
}

void    Account::makeDeposit(int deposit) {
    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    this->_amount += deposit;
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_deposits:" << ++_nbDeposits << "\n";
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool    Account::makeWithdrawal( int withdrawal ) 
{ 
    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    if (withdrawal > _amount)
        return (std::cout << "withdrawal:refused\n", false);
    std::cout << "withdrawal:" << withdrawal << ";";
    _amount -= withdrawal;
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_withdrawals:" << ++_nbWithdrawals << "\n";
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
    return (true);
}

int     Account::checkAmount( void ) const
{
    if (_amount > 0)
        return (1);
    return (0);
}


















