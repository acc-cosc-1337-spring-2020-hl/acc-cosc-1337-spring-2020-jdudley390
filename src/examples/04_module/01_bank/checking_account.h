#include "bank_account.h"
#include<iostream>
//checking_account.h
class CheckingAccount : public BankAccount
{
public:
	CheckingAccount() = default;
	explicit CheckingAccount(int b) : BankAccount(b) {}  //Initializes starting balance from BankAccount class
	int get_balance()const { return balance * (1 + get_rate()); }
		
	
};