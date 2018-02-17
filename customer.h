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
		Cars* cars;						//not sure if we should use pointer to array of car objects or vector of car
		vector<Cars> carsVector;		//objects, this way we can just use push_back whenever a customer adds a car to his rental
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
		virtual void printInfo();
};

#endif /* CUSTOMER_H_ */
