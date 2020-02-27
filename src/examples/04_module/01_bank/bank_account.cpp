//bank_account.cpp
#include "bank_account.h"

void BankAccount::deposit(int amount) //deposit is a member funtion of BankAccount
{
	if (amount > 0)
	{
		balance += amount;
	}
	else
	{
		//usually write to a file 
		throw InvalidAmount("\nAmount must be greater than 0.");
	}
}

void BankAccount::withdraw(int amount)
{
	if (amount <= 0)
	{
		throw InvalidAmount("\nAmount must be greater than 0.");
	}
	else if(balance - amount < 0)
	{
		throw InvalidAmount("\nInufficient funds.");

	}
	else
	{
		balance -= amount;
	}
}
