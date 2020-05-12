#include "recursion.h"
#include<iostream>
//

void display(int n)
{
	if (n == 0) 
	{
		std::cout << "base case\n";
		return;
	}

	std::cout << "load stack\n";
	display(n-1);
	std::cout << "unload from stack \n";
}

int factorial(int n) 
{
	int f = 1;

	if (n == 0) 
	{
		std::cout << "base case \n";
		return f;
	}

	std::cout << "load stack"<<n<<' \n';
	f = n * factorial(n - 1); //it will stop calling factorial after base and will just multiply by each
							  //number on the unwind
	std::cout << "unload stack \n";
	return f;
}