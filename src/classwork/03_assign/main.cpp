#include "loops.h"
using std::cout;

//write using statements for cin and cout


/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int sum = factorial(5);
	cout << "Number is: " << sum;

	return 0;
}