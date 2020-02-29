#include "vectors.h"
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	//Declare variable to control menu
	vector<int> nums{ 8, 4, 20, 88, 66, 99 };
	int choice{ 0 };
	
	
	while (choice != 3)
	{
		cout << "What would you like to do?\n";
		cout << "Press 1 to get max of numbers.\n";
		cout << "Press 2 to get list of primes\n";
		cout << "Press 3 to quit\n";
		//Have user enter 1, 2 or 3 to start or terminate program
		cin >> choice;
		
		if (choice == 1)
		{
			
			
			
			auto max = get_max_from_vector(nums);
			
			
			
			
		}

		else if (choice == 2)
		{
			
			int number;
			cout << "Enter a number to retrieve its primes numbers: ";
			cin >> number;

			auto primes = vector_of_primes(number);
			for (auto prime : primes) 
			{
				cout << prime << " ";
			}

			

		}
		else if(choice != 3)
		{
			cout << "\nIncorrect choice.\n";
		}
		
	}
	
	return 0;
}