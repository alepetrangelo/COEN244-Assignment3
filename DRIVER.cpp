/*
 * 
 *  Created on: Feb 15, 2018
 *      Authors: Roberto Sciortino, Alessandro Petrangelo
 *      ID: 40069658, 40061555
 *      Assignment 3 COEN 244
 */

#include <iostream>
#include "CarRentalManagement.h"
#include "cars.h"
#include "regular.h"
#include "corporate.h"
#include "vip.h"

using namespace std;

int main()
{
	//creating Car Rental System
	CarRentalManagement CRS;

	//creating cars
	Cars car1(100, "Standard");
	Cars car2(101, "Luxury");
	Cars car3(102, "Standard");
	Cars car4(103, "Luxury");
	Cars car5(104, "Standard");

	//creating 4 different types of customers
	Regular cus1(10, "Roberto Sciortino", "7630 Rue de genes", "514-803-6171");
	Regular cus2(11, "Joe More'Better", "9939 Reu du Wop", "514-000-0000");
	Corporate cus3(12, "Donald Trump", "1600 Pennsylvania Ave.", "+1 202-456-1111", "Trump Industrial Alliances", "725 5th Ave, New York");
	VIP cus4(13, "Barack Obama", "1234 Golf Ave.", "+1 202-123-1451");

	/*testing member functions of Car Rental System*/
	//Adding cars to inventory
	CRS.addInventoryCar(car1);
	CRS.addInventoryCar(car2);
	CRS.addInventoryCar(car3);
	CRS.addInventoryCar(car4);
	CRS.addInventoryCar(car5);

	//remove car from inentory
	CRS.removeInventoryCar(car4);

	//register new customer
	CRS.addCustomerList(cus1);
	CRS.addCustomerList(cus2);
	CRS.addCustomerList(cus3);
	CRS.addCustomerList(cus4);

	//remove customer
	CRS.removeCustomerList(cus2);

	//rent cars to customer
	CRS.rentCar(car1, cus3);
	CRS.rentCar(car2, cus3);
	CRS.rentCar(car3, cus4);
	CRS.rentCar(car1, cus4);  //cant because car already rented out
	CRS.rentCar(car4, cus1);  //cant because car removed from inventory
	CRS.rentCar(car5, cus3);

	//returns customers car
	CRS.returnCar(car1, cus3);
	CRS.returnCar(car3, cus1); //cant because car 3 not rented by customer 1

	//shows customer privileges by printing customer info
	CRS.getCustomerPrivilege(cus1);
	CRS.getCustomerPrivilege(cus2);  //cant because was removed from customer list
	CRS.getCustomerPrivilege(cus3);
	CRS.getCustomerPrivilege(cus4);

	//modify regular customer privilege to 25 days
	CRS.setCustomerPrivilege(cus1);
	CRS.setCustomerPrivilege(cus2);  //cant because was removed from customer list

	//searches if car is rented out
	CRS.searchIfCarRented(car1);
	CRS.searchIfCarRented(car2);
	CRS.searchIfCarRented(car4); //cant, car removed from inventory

	//search if customer currently has rented car
	CRS.searchIfCustomerRentedCar(cus1); //no cars rented
	CRS.searchIfCustomerRentedCar(cus3);
	CRS.searchIfCustomerRentedCar(cus4);

	cout<<endl; //used for seperation clarity

	//Determines customer privilege on car search
	CRS.determineCarPrivilege(car1); //cant car not rented out anymore
	CRS.determineCarPrivilege(car2);
	CRS.determineCarPrivilege(car3);

	//determines company car type of corporate customer
	CRS.determineCompanyCarType(cus3);

	return 0;
}
