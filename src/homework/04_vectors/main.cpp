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
	int choice;
	cout << "What would you like to do?\n";
	cout << "Press 1 to get max of numbers.\n";
	cout << "Press 2 to get list of primes\n";
	cout << "Press 3 to quit\n";
	//Have user enter 1, 2 or 3 to start or terminate program
	cin >> choice;
	while (choice != 3)
	{
		vector<int> vector_of_primes;
		if (choice == 1)
		{
			
			vector<int> nums{ 12, 65, 54, 10, 23, 45, 32 };
			
			get_max_from_vector(nums);
			cout << "\nPress 3 to exit ";
			cin >> choice;
			
			
			
		}

		else if (choice == 2)
		{
			
			
			int number = 77;
			vector<int> vector_of_primes(number);
			cout << "\nPress 3 to exit ";
			cin >> choice;

		}
		else
		{
			break;
		}
		
	}
	
	return 0;
}