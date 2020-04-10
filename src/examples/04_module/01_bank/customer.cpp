//customer.cpp
#include "customer.h"
#include<iostream>
std::ostream& operator<<(std::ostream& out, const Customer& c) //tic tac to manager friend function
{
	for (auto& bank_account : c.accounts)
	{
		out << "Balance: " << *bank_account << "\n"; //get value from pointer with "*". otherwise you get the address where it is
	}
		
		return out;
}