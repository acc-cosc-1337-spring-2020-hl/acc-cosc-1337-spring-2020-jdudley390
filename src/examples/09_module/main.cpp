#include "temperature_data.h"
#include<iostream>
int main() 
{
	std::vector<Temperature> out_temps{ Temperature(1, 99.9),
	Temperature(2, 98.5), Temperature(3, 101.1), Temperature(4, 98.9), Temperature(5, 1002.5), Temperature(6, 94.4) };

	TemperatureData data; 
	data.save_temps(out_temps);
	std::vector<Temperature> in_temps = data.get_temps();
	for (auto temp : in_temps)
	{
		std::cout << temp.get_hour() << " " << temp.get_reading() << "\n";
	}
	return 0;
}