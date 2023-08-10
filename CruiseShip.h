#ifndef CRUISESHIP_H
#define CRUISESHIP_H
#include"Ship.h"
class CruiseShip : public Ship
{
protected:
	int passengers;
public:
	CruiseShip();
	CruiseShip(const char*,const char*,int);
	void setCruiseShip(int);
	int getCruiseShip();
	void display();
	CruiseShip& operator = (CruiseShip&);

};
#endif