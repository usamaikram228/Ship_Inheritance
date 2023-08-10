#include<iostream>
#include"CruiseShip.h"
#include"CargoShip.h"
#include"Ship.h"

using namespace std;

int main()
{
	//CargoShip c;

	/*Ship s;
	* 
	char ShipName[20];
	char yearName[20];
	cout << "Name : ";
	cin.getline(ShipName, 20);
	cout << "Year : ";
	cin.getline(yearName, 20);
	s.setShip(ShipName, yearName);
	s.display();*/

	/*Ship* s = new Ship("Titanic", "1910");
	CruiseShip* t = new CruiseShip("Titanic", "1910", 2220);
	CargoShip* c = new CargoShip("acv", "1910", 3330, 5400);
	Ship* ptr[3] = { new Ship("Titanic", "1910"),
		new CruiseShip("Titanic", "1910", 2220)
	};
	for (int i = 0; i < 3; i++)
	{
		ptr[i]->display();
	}
	delete t;
	delete s;
	delete c;*/
	int n;

	cout << "Enter the size of array ship : ";
	cin >> n;

	Ship** array = new Ship *[n];

	for (int i = 0; i < n; i++)
	{
		int choice;
		cout << "Enter the choice he wanted to create ship....... \n"
			<< "Enter 1 for CruiseShip and 2 for CargoShip : ";
		cin >> choice;
		//input Validation
		if (choice < 1 && choice >2)
		{
			cout << "Error! The input value is invalid\n"
				<< "Enter 1 for CruiseShip and 2 for CargoShip : "; 
			cin >> choice;
		}

		if (choice == 1)
		{
			CruiseShip *ptr2 = new CruiseShip;
			char cruiseName[20];
			char cruiseYear[20];
			int p;
			cin.ignore();
			cout << "Enter the name of Cargo Ship : ";
			cin.getline(cruiseName, 20);
			cout << "Enter the year : ";
			cin.getline(cruiseYear, 20);

			ptr2->setShip(cruiseName, cruiseYear);

			cout << "Enter the number of maximum passengers : ";
			cin >> p;
			ptr2->setCruiseShip(p);
			array[i] = ptr2;
		}
		else if (choice == 2)
		{
			CargoShip * ptr = new CargoShip;
			char cargoName[20];
			char cargoYear[20];
			int p, c;
			cin.ignore();
			cout << "Enter the name of Cargo Ship : ";
			cin.getline(cargoName, 20);
			cout << "Enter the year : ";
			cin.getline(cargoYear, 20);

			ptr->setShip(cargoName, cargoYear);

			cout << "Enter the number of maximum passengers : ";
			cin >> p;
			ptr->setCruiseShip(p);

			cout << "Enter the capacity of cargo : ";
			cin >> c;
			ptr->setCargo(c);
			array[i] = ptr;
		}
		
	}
	//Display 
	for (int i = 0; i < n; i++)
	{
		array[i]->display();
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		delete array[i];
		array[i] = nullptr;
	}
	delete[]array;
	array = nullptr;

	return 0;
}
