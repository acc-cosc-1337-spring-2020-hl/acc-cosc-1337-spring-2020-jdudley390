#include "vector.h"
#include<iostream>
/*This top constructor creates the initializer for elements on stack*/
/*Vector::Vector(size_t sz)
	:size{sz} //constructor that passes parameter argument ("sz") size variable*/

/* Initialize num to size dynamic / heap array
Initialize each element to 0
When creating array addess will still hold old data
from other instances
Initilize to 0 with this code*/
Vector::Vector(size_t sz) 
	:size{ sz }, nums{new int[sz]} //nums{new int[sz]} creates initialization for items on heap
{
	for (size_t i = 0; i < sz; ++i) //loop through the array
	{
		nums[i] = 0; //initializes each element to 0
	}
}
/*copy v.size into new class
Create new dynamic memory array
Initialize array elements to the v.nums array values*/
Vector::Vector(const Vector & v) //copy constructor
	:size{v.size}, nums{new int[v.size]} //copied size to new class. it steals the size from v1 
{
	//copy the array elements from v1 into v2
	for (size_t i = 0; i < size; ++i)
	{
		nums/*of*/[i] = v[i];
	}
}
/*
Release dynamic memory
Deallocate memory
*/
Vector::~Vector()
{
	std::cout << "\nrelease memory\n";
	delete[] nums; //for arrays must use subscript operator/[] then the name of the pointer which was int* nums
}
//free function
//==================================================
void use_vector()
{
	//Vector v1(3); //stack variable
	Vector* v1 = new Vector(3); //creates instance of vector on heap/dynamic memory
								//"*" always means pointer must manually deallocate memory
	delete v1; //don't use "[]"/subscript operator only creating one instance of vector
}
