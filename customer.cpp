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
	cars = NULL;
}

//regular constructor
Customer::Customer(int id, string cn, string ca, string t, int d)
{
	customerNumber = id;
	customerName = cn;
	customerAddress = ca;
	customerTel = t;
	duration = d;
	cars = new Cars[10]; //initialized it to 10 cars max per customer, but we could use vectors for this to be dynamic
}

//copy constructor
Customer::Customer(const Customer& c)
{
	customerNumber = c.customerNumber;
	customerName = c.customerName;
	customerAddress = c.customerAddress;
	customerTel = c.customerTel;
	duration = c.duration;
	cars = c.cars;					//TBD if use cars pointer or
	carsVector = c.carsVector;		//cars vector
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
void Customer::printInfo()
{
	cout<<"Customer Info: "<<endl;
	cout<<"Number: "<<customerNumber<<endl;
	cout<<"Name: "<<customerName<<endl;
	cout<<"Address: "<<customerAddress<<endl;
	cout<<"Telephone: "<<customerTel<<endl;
	cout<<"Allowed Rental Duration: "<<duration<<" days"<<endl;
}
