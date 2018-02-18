#include <iostream>
#include <iomanip>
#include <string>
#include "regular.h"

using namespace std;

//default constructor
Regular::Regular() : Customer()
{
	//Nothing to do, no new data members
}

//regular constructor
Regular::Regular(int cusN, string cn, string ca, string ct) : Customer(cusN, cn, ca, ct, 20)
{
	//Nothing to do, no new data members
}

//Copy constructor
Regular::Regular(const Regular& r, const Customer& c) : Customer(c)
{
	//Nothing to do, no new data members
}

Regular::~Regular()
{
}

//prints info
void Regular::printInfo()
{
	cout<<"Regular Customer Info: "<<endl;
	Customer::printInfo();
}
