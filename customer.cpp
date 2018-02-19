#include <iostream>
#include <iomanip>
#include <string>
#include "customer.h"

using namespace std;

//default constructor
Customer::Customer()
{
	customerNumber = 0;
	customerName = "";
	customerAddress = "";
	customerTel = "";
	duration = 0;
}

//regular constructor
Customer::Customer(int id, string cn, string ca, string t, int d)
{
	customerNumber = id;
	customerName = cn;
	customerAddress = ca;
	customerTel = t;
	duration = d;
}

//copy constructor
Customer::Customer(const Customer& c)
{
	customerNumber = c.customerNumber;
	customerName = c.customerName;
	customerAddress = c.customerAddress;
	customerTel = c.customerTel;
	duration = c.duration;
	customerCars = c.customerCars;
}

//destructor
Customer::~Customer()
{
}

//gets customer number
int Customer::getCustomerNumber()
{
	return customerNumber;
}

//get customer name
string Customer::getCustomerName()
{
	return customerName;
}

//gets address
string Customer::getCustomerAddress()
{
	return customerAddress;
}

//gets telephone
string Customer::getCustomerTel()
{
	return customerTel;
}
//gets car rental duration
int Customer::getDuration()
{
	return duration;
}

//sets car rental duration
void Customer::setDuration(int d)
{
	duration = d;
}

//prints customer info
void Customer::printInfo() const
{
	cout<<"Customer Number: "<<customerNumber<<endl;
	cout<<"Name: "<<customerName<<endl;
	cout<<"Address: "<<customerAddress<<endl;
	cout<<"Telephone: "<<customerTel<<endl;
	cout<<"Allowed Rental Duration: "<<duration<<" days"<<endl;
}

//comparing customers
bool Customer::compareCustomers(const Customer& a, const Customer& b) const
{
	if(b.customerNumber == a.customerNumber)
		return true;
	else
		return false;
}

//assigns car to customer
void Customer::rentCar(Cars& c)
{
	customerCars.push_back(c);
	customerCars[customerCars.size()-1].setCarAvailability(false);
}

//removes car from customer
void Customer::returnCar(Cars& c)
{
	for (int i=0; i<customerCars.size(); i++)
	{
		if (c.compareCars(c, customerCars[i]))
		{
			customerCars.erase(customerCars.begin()+i);
			c.setCarAvailability(true);
			return;
		}
	}
	cout<<"Car #"<<c.getCarID()<<" is not rented by this customer!"<<endl;
}

//check if customer has rented a car
bool Customer::checkIfRentedCar() const
{
	if (customerCars.size()>0)
		return true;
	else
		return false;
}

//prints Info of all cars rented by customer
void Customer::carListInfo() const
{
	for (int i=0; i<customerCars.size(); i++)
	{
		customerCars[i].printCarInfo();
	}
}

//searches for specific car in customer car list
bool Customer::searchCar(const Cars& c) const
{
	for (int i=0; i<customerCars.size(); i++)
		if (c.compareCars(c, customerCars[i]))
			return true;
	return false;
}
