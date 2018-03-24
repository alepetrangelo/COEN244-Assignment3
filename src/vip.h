#ifndef VIP_H_
#define VIP_H_

#include <string>
#include "customer.h"

using namespace std;

//derived class VIP from class customer
class VIP: public Customer
{
	//No additional data members, inherits everything from class customer

	public:

		//constructors & destructor
		VIP();
		VIP(int, string, string, string);
		VIP(const VIP&, const Customer&);
		virtual ~VIP();

		//overriden print function
		virtual void printInfo() const;
};


#endif /* VIP_H_ */
