#include <iostream>
#include <iomanip>
#include <string>
#include "vip.h"

using namespace std;

//default constructor
VIP::VIP() : Customer()
{
	//Nothing to do, no new data members
}

//regular constructor
VIP::VIP(int cusN, string cn, string ca, string ct) : Customer(cusN, cn, ca, ct, 45)
{
	//Nothing to do, no new data members
}

//Copy constructor
VIP::VIP(const VIP& v, const Customer& c) : Customer(c)
{
	//Nothing to do, no new data members
}

VIP::~VIP()
{
}

//prints info
void VIP::printInfo()
{
	Customer::printInfo();
}
