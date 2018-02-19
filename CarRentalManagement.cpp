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
	for (unsigned int i=0; i<inventoryCars.size(); i++)
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
	for (unsigned int i=0; i<customerList.size(); i++)
		{
			if (cus.compareCustomers(cus, customerList[i]))
				customerList.erase(customerList.begin()+i);
		}
}

//rents car to customer
void CarRentalManagement::rentCar(Cars& car, Customer& cus)
{
	for (unsigned int i=0; i<inventoryCars.size(); i++)
		if (car.compareCars(car, inventoryCars[i]))
			if(car.getCarAvailability())
			{
				for (unsigned int j=0; j<customerList.size(); j++)
					if (cus.compareCustomers(cus, customerList[j]))
					{
						customerList[j].rentCar(car);
						car.setCarAvailability(false);
						return;
					}
			}
			else
			{
				cout<<"Car #"<<car.getCarID()<<" is already rented out!"<<endl;
				return;
			}
	cout<<"Car #"<<car.getCarID()<<" not found in inventory"<<endl;
}

//returns car to inventory list and removes customer from customer list if only had 1 car
void CarRentalManagement::returnCar(Cars& car, Customer& cus)
{
	for (unsigned int i=0; i<customerList.size(); i++)
		if (cus.compareCustomers(cus, customerList[i]))
		{
			customerList[i].returnCar(car);
		}
}

//return particular customer privileges
void CarRentalManagement::getCustomerPrivilege(Customer& cus)
{
	for (unsigned int i=0; i<customerList.size(); i++)
	{
		if (cus.compareCustomers(cus, customerList[i]))
		{
			cus.printInfo();
			return;
		}
	}
	cout<<endl<<"Customer not found (either removed or non-existant)"<<endl;
}

//change customers privilege
void CarRentalManagement::setCustomerPrivilege(Customer& cus)
{
	for (unsigned int i=0; i<customerList.size(); i++)
	{
		if (cus.compareCustomers(cus, customerList[i]))
		{
			customerList[i].setDuration(25);
			cout<<endl<<"Customer #"<<customerList[i].getCustomerNumber()<<" duration privilege is now set at: "<<customerList[i].getDuration()<<" days"<<endl;
			return;
		}
	}
	cout<<"Customer not found (either removed or non-existant)"<<endl;
}

//determines whether car is rented or not
void CarRentalManagement::searchIfCarRented(const Cars& car)
{
	for (unsigned int i=0; i<inventoryCars.size(); i++)
		if (car.compareCars(car, inventoryCars[i]))
			if(car.getCarAvailability())
			{
				cout<<endl<<"Car #"<<car.getCarID()<<" is available to rent!"<<endl;
				return;
			}
			else
			{
				cout<<"Car #"<<car.getCarID()<<" is rented out and is not available!"<<endl;
				return;
			}
	cout<<"Car #"<<car.getCarID()<<" not found in inventory!"<<endl;
}

//determines whether customer has rented car
void CarRentalManagement::searchIfCustomerRentedCar(Customer& cus)
{
	for (unsigned int i=0; i<customerList.size(); i++)
		if (cus.compareCustomers(cus, customerList[i]))
			if (customerList[i].checkIfRentedCar())
			{
				cout<<"Customer #"<<cus.getCustomerNumber()<<" has one or more cars rented!"<<endl;
				return;
			}
			else
			{
				cout<<endl<<"Customer #"<<cus.getCustomerNumber()<<" has no rented cars!"<<endl;
				return;
			}
}

//determines customer privilege on certain car
void CarRentalManagement::determineCarPrivilege(const Cars& car)
{
	cout<<"Customer duration privilege for car #"<<car.getCarID()<<": ";

	for (unsigned int i=0; i<customerList.size(); i++)
		if (customerList[i].searchCar(car))
		{
			cout<<customerList[i].getDuration()<<" days"<<endl;
			return;
		}
	cout<<"This car is not currently rented by any customer!"<<endl;
}

///determines car type from company customer
void CarRentalManagement::determineCompanyCarType(const Customer& cus)
{
	for (unsigned int i=0; i<customerList.size(); i++)
		if (cus.compareCustomers(cus, customerList[i]))
		{
			cout<<endl<<"Corporate Customer #"<<customerList[i].getCustomerNumber()<<" Car Rental Info:"<<endl;
			customerList[i].carListInfo();
			return;
		}
}
