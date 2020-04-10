//customer.h
#include<iostream>
#include<vector>
#include<memory>
#include "checking_account.h"
#include "savings_account.h"
#ifndef CUSTOMER_H
#define CUSTOMER_H
//Don't want classes to be responsible for making instances of other objects
using std::unique_ptr;
class Customer
{
public:
    
    Customer(std::vector<std::unique_ptr<BankAccount>>& acts) : accounts{std::move(acts) }
    {
    }
    friend std::ostream& operator<<(std::ostream& out, const Customer& c);
private:
    std::vector<std::unique_ptr<BankAccount>> accounts;
};

#endif // CUSTOMER_H
