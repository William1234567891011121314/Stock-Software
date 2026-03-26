#include <string>
#include <vector>

#include "cashier.hpp"
#include "work_shift.hpp"

class Manager {
private:
	int id;
	std::string userName;
	std::string passwd;
public:
	int getId();
	std::string getUserName();
	std::string getPasswd();

	void setId(std::vector<Manager>* managers);
	void setName(std::string* userName);
	void setPasswd(std::string* passwd);

	void chageWorkShift(Cashier* cashier, WorkShift workShift);
};