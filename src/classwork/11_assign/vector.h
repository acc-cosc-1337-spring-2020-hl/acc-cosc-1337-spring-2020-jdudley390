//
#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include<cstddef>
#include<stddef.h>

class Vector
{
public:
	//Vector() : default; //default constructor no parameters
	Vector(size_t sz); //constructor that accepts a "size_t" data type. This references v made in main.cpp
	Vector(const Vector& v); //copy constructor: Rule of 3
	size_t Size() const{ return size; };
	int& operator[](int i) { return nums[i]; } //it will accept i(int i) and return the item at i from nums {return nums[i]}
	int& operator[](int i)const { return nums[i]; } //int& operator(int i) is the function stuff in {} is statement usually in .cpp 
	//code above allows you to modify individual elements of the array
	//void set_size(size_t sz) { size = sz; }
	//If there is a constructor then there is probably a destructor
	~Vector(); //destructor that deallocates memory
private:
	size_t size;
	int* nums;
};
#endif 

//doesn't belong to the class
//free function
void use_vector();