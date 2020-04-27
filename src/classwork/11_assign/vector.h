//
#ifndef MY_VECTOR_H

#define MY_VECTIOR_H

class Vector
{
public:
	Vector(size_t sz);
	Vector(const Vector& v); //copy constructor RULE OF 3
	Vector& operator=(const Vector& v); //copy assignment operator RULE OF 3
	size_t Size() const { return size; }
	int& operator[](int i) { return nums[i]; }//overlaod the subscript/index operator []
	int& operator[](int i) const { return nums[i]; }
	~Vector(); //destructor (is automatically called) RULE OF 3
private:
	size_t size;
	int* nums;
	
};

void use_vector();

#endif 