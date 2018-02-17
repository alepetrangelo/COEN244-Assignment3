#include <iostream>
#include <iomanip>
#include <string>
#include "cars.h"

using namespace std;

//default constructor
Cars::Cars()
{
	carID = 0;
	carType = "";
	carAvailable = true;
}

//regular constructor
Cars::Cars(int id, string ct)
{
	carID = id;
	carType = ct;
}

//copy constructor
Cars::Cars(const Cars& c)
{
	carID = c.carID;
	carType = c.carType;
	carAvailable = c.carAvailable;
}

//gets car ID
int Cars::getCarID() const
{
	return carID;
}

//gets car type
string Cars::getCarType() const
{
	return carType;
}

//gets car availability
bool Cars::getCarAvailability() const
{
	return carAvailable;
}

//sets car availability
void Cars::setCarAvailability(bool a)
{
	carAvailable = a;
}

//prints car info
void Cars::printCarInfo()
{
	cout<<"Car Info:"<<endl;
	cout<<"Car ID: "<<carID<<endl;
	cout<<"Car Type: "<<carType<<endl;
	cout<<"Car Availability: ";
	if (carAvailable)
		cout<<"Available!";
	else cout<<"Not Available!";
}
