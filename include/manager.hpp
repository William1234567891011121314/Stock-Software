#include <string>

class Manager {
private:
	int id;
	std::string userName;
	std::string passwd;
public:
	int getId();
	std::string getUserName();
	std::string getPasswd();

	void setId();
	void setName();
	void setPasswd();

	void chageWorkShift();
};