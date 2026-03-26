#include <string>
#include <vector>

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

	void setId(std::vector<Cashier>* cashiers);
	void setSales(int* sales);
	void setCommission(float* commission);
	void setWorkShift(WorkShift* workShift);
	void setPasswd(std::string* passwd);
	void setUserName(std::string* userName);

	bool assignInt(CashierInt* cashierInt);
};