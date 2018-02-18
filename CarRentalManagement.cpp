#include <iostream>
#include "CarRentalManagement.h"

using namespace std;

//default constructor
CarRentalManagement::CarRentalManagement()
{
	//Nothing to do
}

//destructor
CarRentalManagement::~CarRentalManagement()
{
}

//adds car to inventory list
void CarRentalManagement::addInventoryCar(const Cars& car)
{

}

//removes car from inventory list
void CarRentalManagement::removeInventoryCar(const Cars& car)
{

}

//adds customer to customer list
void CarRentalManagement::addCustomerList(const Customer& cus)
{

}

//removes customer from customer list
void CarRentalManagement::removeCustomerList(const Customer& cus)
{

}

//rents car to customer
void CarRentalManagement::rentCar(const Cars& car, const Customer& cus)
{

}

//returns car to inventory list and removes customer from customer list if only had 1 car
void CarRentalManagement::returnCar(const Customer& cus)
{

}

//return customer privileges
void CarRentalManagement::getCustomerPrivilege(const Customer& cus)
{

}

//change customers privilege
void CarRentalManagement::setCustomerPrivilege(const Customer& cus)
{

}

//determines whether car is rented or not
void CarRentalManagement::searchIfCarRented(const Cars& car)
{

}

//determines whether customer has rented car
void CarRentalManagement::searchIfCustomerRentedCar(const Customer& cus)
{

}

//determines customer privilege on certain car
void CarRentalManagement::determineCarPrivilege(const Cars& car)
{

}

///determines car type from company customer
void CarRentalManagement::determineCompanyCarType(const Customer&)
{

}
