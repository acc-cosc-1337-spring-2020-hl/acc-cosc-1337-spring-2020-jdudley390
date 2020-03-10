#include "checking_account.h"
#include<iostream>
#include<vector>

using std::cout; using std::vector; using std::cin;


int main()
{

	CheckingAccount c;
	CheckingAccount a(50), b(10);
	//BankAccount
	display_balance(a);
	
	cin >> a;
	cout << a;
	
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