#ifndef CARGOSHIP_H
#define CARGOSHIP_H
#include"CruiseShip.h"

class CargoShip : public CruiseShip
{
private:
	int capacity;
public:
	CargoShip();
	CargoShip(const char*,const char*,int,int);
	void setCargo(int);
	int getCargo();
	void display();
};
#endif