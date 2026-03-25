#include <string>
#include "work_shift.hpp"

class Cashier {
private:
	int id;
	int sales;
	float commission;
	WorkShift workShift;
	std::string passwd;

public:
	int getId();
	int getSales();
	float getCommission();
	WorkShift getWorkShift();
	std::string getPasswd();

	void setId();
	void setSales();
	void setCommission();
	void setWorkShift();
	void setPasswd();
};