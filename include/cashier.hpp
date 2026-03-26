#include <string>
#include "work_shift.hpp"
#include "cashier_int.hpp"

class Cashier {
private:
	int id;
	int sales;
	float commission;
	WorkShift workShift;
	std::string userName;
	std::string passwd;

public:
	int getId();
	int getSales();
	float getCommission();
	WorkShift getWorkShift();
	std::string getPasswd();
	std::string getUserName();

	void setId();
	void setSales();
	void setCommission();
	void setWorkShift();
	void setPasswd();
	void setUserName();

	bool assignInt(CashierInt* cashierInt);
};