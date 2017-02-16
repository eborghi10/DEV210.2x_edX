/*
 * SavingsAccount.h
 *
 *  Created on: 16 Feb 2017
 *      Author: emiliano
 */

#ifndef SAVINGSACCOUNT_H_
#define SAVINGSACCOUNT_H_

#pragma once
#include "BankAccount.h"
#include "Freezable.h"
#include "Loggable.h"

#include <list>

class SavingsAccount :
	public BankAccount, public Freezable, public Loggable {

private:
	double interestRate;
	bool frozen;

public:
	SavingsAccount(double initialBalance, double interestRate = 0.0);
	virtual ~SavingsAccount();

	void earnInterest();

	virtual void deposit(double amount);
	virtual void withdraw(double amount);

	// Implement the pure virtual functions
	virtual std::string getTermsAndConditions();
	virtual double getGuaranteedLimit();

	virtual void log(const std::string & message) const;

	virtual void freeze();
	virtual void unfreeze();
};

#endif /* SAVINGSACCOUNT_H_ */
