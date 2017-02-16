/*
 * BankAccount.cpp
 *
 *  Created on: 16 Feb 2017
 *      Author: emiliano
 */

#include "BankAccount.h"

BankAccount::BankAccount(double initialBalance)
	: balance(initialBalance) {}

BankAccount::~BankAccount() {}

double BankAccount::getBalance() const {
	return this->balance;
}

void BankAccount::deposit(double amount) {
	this->balance += amount;
}

void BankAccount::withdraw(double amount) {
	this->balance -= amount;
}
