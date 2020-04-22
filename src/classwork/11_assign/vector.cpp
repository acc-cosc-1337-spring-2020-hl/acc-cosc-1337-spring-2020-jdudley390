#include "vector.h"
#include<iostream>
Vector::Vector(size_t sz) 
	:size{ sz }, nums{ new int[sz] } //construct initializer
{
	std::cout << "allocate memory\n";
	for (size_t i = 0; i < sz; ++i)
	{
		nums[i] = 0;
	}
}

Vector::Vector(const Vector& v)
	: size{v.size}, nums{new int[v.size]}
{
	for (size_t i = 0; i < size; ++i)
	{
		nums[i] = v[i];
	}
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