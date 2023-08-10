#include<iostream>
#include"Ship.h"

using namespace std;

Ship::Ship()
{
	//cout << "Default ship : " << endl;
	name[20] = NULL;
	year[20] = NULL;
}
Ship::Ship(const char* n, const char* y)
{
	strcpy_s(name, n);
	strcpy_s(year, y);
}
void Ship::setShip(const char* n, const char* y)
{
	strcpy_s(name, n);
	strcpy_s(year, y);
}
const char* Ship::getName()
{
	return name;
}
const char* Ship::getYear()
{
	return year;
}
void Ship::display()
{
	cout << "Name : " << name << endl;
	cout << "Year : " << year << endl;
}
Ship& Ship:: operator =(const Ship&s)
{
	strcpy_s(name, s.name);
	strcpy_s(year, s.year);
	return *this;
}