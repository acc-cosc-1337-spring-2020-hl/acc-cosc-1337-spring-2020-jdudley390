#include "dna.h"
#include<bits/rdc++.h>
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const string dna)
{
	//start counter and create gc string variable
	double percent;
	double count = 0.0;
	string dna;
	//Have a user put in 8 letters made up of actg
	
	//create loops to get count of letters g and c
	for (double i = 0; i < dna.size(); i++)
	{
		if (dna.at(i) == 'G'  || 'C');
			count++;
	}
	double percent = count / gc.size();
		cout << percent;
		return 0.0;
}






/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{


	return string();
}




/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
	replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string dna)
{
	return string();
}

