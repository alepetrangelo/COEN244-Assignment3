#ifndef CORPORATE_H_
#define CORPORATE_H_

#include <string>
#include "customer.h"

using namespace std;

//derived class corporate from class customer
class Corporate: public Customer
{
	private:

		string companyName;
		string companyAddress;

	public:

		//constructors & destructor
		Corporate();
		Corporate(int, string, string, string, string, string);
		Corporate(const Corporate&, const Customer&);
		virtual ~Corporate();

		//overriden print function
		virtual void printInfo();

		//member functions
		string getCompanyName();
		string getCompanyAddress();
};

#endif /* CORPORATE_H_ */
