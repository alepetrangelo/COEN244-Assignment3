#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <string>
#include <vector>
#include "cars.h"

using namespace std;

class Customer
{
	protected:

		//customer info
		int customerNumber;
		string customerName;
		string customerAddress;
		string customerTel;

		//customer car rental info
		vector<Cars> customerCars;
		int duration;

	public:

		//constructors & destructor
		Customer();
		Customer(int, string, string, string, int);
		Customer(const Customer&);
		virtual ~Customer();

		//get & set functions
		int getCustomerNumber();
		string getCustomerName();
		string getCustomerAddress();
		string getCustomerTel();
		void setDuration(int);
		int getDuration();
		virtual void printInfo() const;
		bool compareCustomers(const Customer&, const Customer&) const;

		//subsystem to deal with cars
		void rentCar(Cars&);
		void returnCar(Cars&);
		bool checkIfRentedCar() const;
		void carListInfo() const;
		bool searchCar(const Cars&) const;
};

#endif /* CUSTOMER_H_ */
