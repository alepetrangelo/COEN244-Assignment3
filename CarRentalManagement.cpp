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
	inventoryCars.push_back(car);
}

//removes car from inventory list
void CarRentalManagement::removeInventoryCar(const Cars& car)
{
	for (int i=0; i<inventoryCars.size(); i++)
	{
		if (car.compareCars(car, inventoryCars[i]))
			inventoryCars.erase(inventoryCars.begin()+i);
	}
}

//adds customer to customer list
void CarRentalManagement::addCustomerList(const Customer& cus)
{
	customerList.push_back(cus);
}

//removes customer from customer list
void CarRentalManagement::removeCustomerList(const Customer& cus)
{
	for (int i=0; i<customerList.size(); i++)
		{
			if (cus.compareCustomers(cus, customerList[i]))
				customerList.erase(customerList.begin()+i);
		}
}

//rents car to customer
void CarRentalManagement::rentCar(const Cars& car, const Customer& cus)
{
	cus.customerCars.push_back(car);
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
