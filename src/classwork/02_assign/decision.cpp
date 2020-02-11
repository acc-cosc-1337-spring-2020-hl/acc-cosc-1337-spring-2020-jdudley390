#include<iostream>
#include "decision.h"
//Write the function code that returns the product of hours and hourly_rate.

double gross_pay(double hours, double hourly_rate)
{
	double gross;

	if (hours <= 40)
	{
		gross = hours * hourly_rate;
	}
	else
	{
		gross = (40 * hourly_rate) + (hours - 40) * 1.5 * hourly_rate ;
	}

	return gross;
}
