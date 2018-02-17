#ifndef REGULAR_H_
#define REGULAR_H_
#include <string>
#include "customer.h"

using namespace std;

//derived class regular from class customer
class Regular: public Customer
{
	//No additional data members, inherits everything from class customer

	public:

		//constructors & destructor
		Regular();
		Regular(int, string, string, string);
		Regular(const Regular&, const Customer&);
		virtual ~Regular();

		//overriden print function
		virtual void printInfo();
};

#endif /* REGULAR_H_ */
