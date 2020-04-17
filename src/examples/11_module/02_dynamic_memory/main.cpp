#include<iostream>
using std::cout;

int main() 
{

	int* ptr_num = new int(5); //declare adn acquire new memroy(heap)

	cout << &ptr_num << "\n";//displays address where ptr_num is stored
	cout << ptr_num <<  "\n"; //address where new_int(5) is stored
	cout << *ptr_num;

	delete ptr_num;
	ptr_num = nullptr;

	return 0;
}