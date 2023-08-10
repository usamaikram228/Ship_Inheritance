#include<iostream>
#include"CruiseShip.h"
using namespace std;

CruiseShip::CruiseShip()
{
	//cout << "Default cruise : " << endl;
	passengers = 0;
}
CruiseShip::CruiseShip(const char* n, const char* y, int p) :Ship(n, y), passengers(p)
{ }
void CruiseShip::setCruiseShip(int p)
{
	passengers = p;
}
int CruiseShip::getCruiseShip()
{
	return passengers;
}
void CruiseShip::display()
{
	cout << "Name : " << name << endl;
	cout << "Maximum Passengers : " << passengers << endl;
}
CruiseShip& CruiseShip:: operator = (CruiseShip& s)
{
	//operator=();
	passengers = s.passengers;
	return *this;
}