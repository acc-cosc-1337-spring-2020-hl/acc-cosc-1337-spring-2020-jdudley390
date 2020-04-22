//
#ifndef MY_VECTOR_H

#define MY_VECTIOR_H

class Vector
{
public:
	Vector(size_t sz);
	Vector(const Vector& v); //copy constructor
	size_t Size() const { return size; }
	int& operator[](int i) { return nums[i]; }//overlaod the subscript/index operator []
	int& operator[](int i) const { return nums[i]; }
	~Vector(); //destructor (is automatically called)
private:
	size_t size;
	int* nums;
	
};

void use_vector();

#endif 