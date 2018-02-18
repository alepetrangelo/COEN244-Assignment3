#include <iostream>
#include <iomanip>
#include <string>
#include "corporate.h"

using namespace std;

//default constructor
Corporate::Corporate() : Customer()
{
	companyName = "";
	companyAddress = "";
}

//regualr cosntructor
Corporate::Corporate(int cusN, string cn, string ca, string ct, string compN, string compA) : Customer(cusN, cn, ca, ct, 35)
{
	companyName = compN;
	companyAddress = compA;
}

//copy constructor
Corporate::Corporate(const Corporate& co, const Customer& c) : Customer(c)
{
	companyName = co.companyName;
	companyAddress = co.companyAddress;
}

//destructor
Corporate::~Corporate()
{
}

//gets company name
string Corporate::getCompanyName()
{
	return companyName;
}

//gets company address
string Corporate::getCompanyAddress()
{
	return companyAddress;
}

//print info
void Corporate::printInfo()
{
	cout<<"Corporate Customer Info: "<<endl;
	Customer::printInfo();
	cout<<"Company Name: "<<companyName<<endl;
	cout<<"Company Address: "<<companyAddress<<endl;
}

