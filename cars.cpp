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

//destructor
Cars::~Cars()
{
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
void Cars::printCarInfo() const
{
	cout<<"Car ID: "<<carID<<endl;
	cout<<"Car Type: "<<carType<<endl;
	cout<<"Car Availability: ";
	if (carAvailable)
		cout<<"Not rented!"<<endl;
	else cout<<"Currently Rented!"<<endl;
}

//comparing cars
bool Cars::compareCars(const Cars& a, const Cars& b) const
{
	if(a.carID == b.carID)
		return true;
	else
		return false;
}
