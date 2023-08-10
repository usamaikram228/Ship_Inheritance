#ifndef SHIP_H
#define SHIP_H
class Ship
{
protected:
	char name[10];
	char year[10];
public:
	Ship();
	Ship(const char*, const char*);
	void setShip(const char*, const char*);
	const char* getName();
	const char* getYear();
	virtual void display();
	Ship& operator =(const Ship&);
};
#endif