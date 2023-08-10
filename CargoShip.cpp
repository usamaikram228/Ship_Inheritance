#include<iostream>
#include"CargoShip.h"

using namespace std;

CargoShip::CargoShip()
{
	//cout << "Default cargo : " << endl;
	capacity = 0;
}
CargoShip::CargoShip(const char*n,const char* y,int s,int c) : CruiseShip(n,y,s)
{
	capacity = c;
}
void CargoShip::setCargo(int c)
{
	capacity = c;
}
int CargoShip::getCargo()
{
	return capacity;
}
void CargoShip::display()
{
	cout << "Name : " << name << endl;
	cout << "Capacity : " << capacity << endl;
}