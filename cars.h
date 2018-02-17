#ifndef CARS_H_
#define CARS_H_
#include <string>

using namespace std;

class Cars
{
	private:

		int carID;
		string carType;
		bool carAvailable;

	public:

		//Constructors & Destructor
		Cars();
		Cars(int, string);
		Cars(const Cars&);
		~Cars();

		//get & set functions for car info
		int getCarID() const;
		string getCarType() const;
		bool getCarAvailability() const;
		void setCarAvailability(bool);
		void printCarInfo();
};




#endif /* CARS_H_ */
