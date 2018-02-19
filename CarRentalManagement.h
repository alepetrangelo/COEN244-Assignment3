#ifndef CARRENTALMANAGEMENT_H_
#define CARRENTALMANAGEMENT_H_

#include <vector>
#include "cars.h"
#include "customer.h"

class CarRentalManagement
{
	private:

		vector<Cars> inventoryCars;
		vector<Customer> customerList;

	public:

		//constructor & destructor
		//not sure if we need a parameters cosntructor for this class
		CarRentalManagement();
		~CarRentalManagement();

		//member functions
		void addInventoryCar(const Cars&);
		void removeInventoryCar(const Cars&);
		void addCustomerList(const Customer&);
		void removeCustomerList(const Customer&);
		void rentCar(Cars&, Customer&);
		void returnCar(Cars&, Customer&);
		void getCustomerPrivilege(const Customer&);
		void setCustomerPrivilege(const Customer&);
		void searchIfCarRented(const Cars&);
		void searchIfCustomerRentedCar(const Customer&);
		void determineCarPrivilege(const Cars&);
		void determineCompanyCarType(const Customer&);
};



#endif /* CARRENTALMANAGEMENT_H_ */
