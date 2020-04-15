//temperature.h
#ifndef TEMPURATURE_H
#define TEMPURATURE_H

class Temperature
{
public:
	Temperature(int h, double r) : hour{h}, reading{r} {}
	int get_hour()const { return hour; } //const means get_hour function cannot change variablee
	double get_reading() const { return reading; }
private:
	int hour;
	double reading;
	
};
#endif // !TEMPURATURE_H
