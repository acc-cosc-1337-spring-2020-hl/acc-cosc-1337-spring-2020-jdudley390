#include "memory_leak.h"

void memory_leak()
{
	
	int* ptr_num = new int(6);
	//some other funtion code
	//we forget to deleter and point to nullptr
}
