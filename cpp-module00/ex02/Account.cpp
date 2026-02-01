/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:01:09 by iisraa11          #+#    #+#             */
/*   Updated: 2026/02/01 15:51:47 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account()
{
}

Account::Account(int initial_deposit)
{
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _displayTimestamp();
    std::cout << " index:"
              << _accountIndex
              << ";amount:"
              << _amount
              << ";created"
              << std::endl;
    _nbAccounts++;
    _totalAmount += _amount;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";amount:" << _amount
              << ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
    //[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0 displayAccountsInfos
    _displayTimestamp();
    std::cout << " accounts:"
              << _nbAccounts
              << ";total:"
              << _totalAmount
              << ";deposits:"
              << _totalNbDeposits
              << ";withdrawals:"
              << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << " index:"
    << _accountIndex
    << ";p_amount:"
    << _amount;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << ";deposit:"
    << deposit
    << ";amount:"
    << _amount
    << ";nb_deposits:"
    << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << " index:"
    << _accountIndex
    << ";p_amount:"
    << _amount
    << ";withdrawal:";
    if (_amount - withdrawal < 0)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << withdrawal
    << ";amount:"
    << _amount
    << ";nb_withdrawals:"
    << _nbWithdrawals
    << std::endl;
    return (true);
}
int Account::checkAmount(void) const
{
    return (_amount);
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << " index:"
              << _accountIndex
              << ";amount:"
              << _amount
              << ";deposits:"
              << _nbDeposits
              << ";withdrawals:"
              << _nbWithdrawals
              << std::endl;
}

void Account::_displayTimestamp(void)
{
    std::time_t t = std::time(NULL);
    std::tm *now = std::localtime(&t);
    std::cout << '['
              << now->tm_year + 1900
              << std::setfill('0') << std::setw(2) << now->tm_mon + 1
              << std::setfill('0') << std::setw(2) << now->tm_mday
              << '_'
              << std::setfill('0') << std::setw(2) << now->tm_hour
              << std::setfill('0') << std::setw(2) << now->tm_min
              << std::setfill('0') << std::setw(2) << now->tm_sec
              << ']';
}
