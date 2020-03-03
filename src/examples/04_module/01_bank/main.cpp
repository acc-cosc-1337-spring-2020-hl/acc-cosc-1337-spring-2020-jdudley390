#include "bank_account.h"
#include<iostream>
#include<vector>

using std::cout; using std::vector;


int main()
{
	
	vector<BankAccount> accounts{ BankAccount(100),
	BankAccount(200), BankAccount(300) };

	for (auto act : accounts)
	{
		cout << act.get_balance() << "\n";
	}
	BankAccount account(500); 
	int balance = account.get_balance();
	cout << "Balance: " << balance;

	try 
	{
		account.deposit(-10);
	}
	catch (InvalidAmount e) //makes it easier to test
	{
		cout << e.get_message();
	}
	return 0;
}