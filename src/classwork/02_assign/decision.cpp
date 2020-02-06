#include<iostream>
#include "decision.h"
//Write the function code that returns the product of hours and hourly_rate.

double gross_pay(double hours, double hourly_rate)
{
	double gross;

	if (hours <= 40)
		gross = hours * hourly_rate;
	else if (hours > 40)
		gross = (40 * hourly_rate) + (hours - 40) * hourly_rate + (hourly_rate * .5);
	

	

	return gross;
}
