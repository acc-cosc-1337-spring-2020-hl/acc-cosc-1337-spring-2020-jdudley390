#include<savings_account.h>
#include "checking_account.h"
#include<iostream>
#include<vector>
#include<functional>
#include<memory>
using std::cout; using std::vector; using std::cin;
using std::unique_ptr; using std::make_unique;


int main()
{
	
	//declare unique pointer    create instance with make_unique
	unique_ptr<BankAccount> s = make_unique<SavingsAccount>(100); //2 unique pointers one of checking one of saving
	unique_ptr<BankAccount> c = make_unique<CheckingAccount>(100);
	//parent of s is the main from
	vector<unique_ptr<BankAccount>> acts;// { std::move(s), std::move(c) };//create vector of unique pointers
	//move makes the vector the parent of the object
	//if you don't use move compiler doesn't know how to set the parent for it
	//must you move to be able to change frame
	acts.push_back(std::move(s));
	acts.push_back(std::move(c));
	for (auto &account : acts)
	{
		 cout << account->get_balance() << "\n";
	}
	return 0;
}

//BankAccount* a = new BankAccount(); //*puts data in heap(dynamic memory)
	//a->get_balance(); //get_balance is member of  via pointer(->)
	//delete a; //must delete memory yourself
	//return 0

	//CheckingAccount c;
	//CheckingAccount a(50), b(10);
	//BankAccount
	//display_balance(a);
	
	//cin >> a;
	//cout << a;
	
	//vector<BankAccount> accounts{ BankAccount(100),
	//BankAccount(200), BankAccount(300) };

	//for (auto act : accounts)
	//{
	//	cout << act.get_balance() << "\n";
	//}
	//BankAccount account(500); 
	//int balance = account.get_balance();
	//cout << "Balance: " << balance;

	//try 
	//{
	//	account.deposit(-10);
	//}
	//catch (InvalidAmount e) //makes it easier to test
	//{
	//	cout << e.get_message();
	//}
	//return 0;
//}
