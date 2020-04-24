#include "vector.h"
#include<iostream>
/*
Allocated dynamic memory for an array of sz(size) elements
Initialized all the array elements to 0

*/

Vector::Vector(size_t sz) 
	:size{ sz }, nums{ new int[sz] } //construct initializer
{
	std::cout << "allocate memory\n";
	for (size_t i = 0; i < sz; ++i)
	{
		nums[i] = 0;
	}
}
/*
Set the new class size to the right-hand operand array size
Allocated a dynamic array of size element
Initialized all the elements to the value o fhte right hand operand(class)
*/

Vector::Vector(const Vector& v)
	: size{v.size}, nums{new int[v.size]}
{
	for (size_t i = 0; i < size; ++i)
	{
		nums[i] = v[i];
	}
}
/*
Allocated temporarty memory of right-hand operand size
Initialized all temp elements to right-hand operand elements' value
Deallocated created memory of this class
Copied temporary memory to this class (nums)
Set size to right-hand operand size
retur a dereferenced instance of this class
*/
Vector&  Vector::operator=(const Vector& v) 
{
	int* temp = new int[v.size];

	for (size_t i = 0; i < v.size; i++)
	{
		temp[i] = v[i];
		
	}
	delete nums;

	nums = temp;
	size = v.size;

	return *this;
}

Vector::~Vector()//creates destructotor part of vector class
{
	std::cout << "release memory\n\n";
	delete[] nums; //deletes arrays
}

void use_vector() 
{
	Vector* v = new Vector(3); //using the pointer means you have ot delete  vector manually
	delete v;
	//Vector v(3) <<<<<C++ automatically deleting memory instead of manually
}