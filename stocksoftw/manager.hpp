#include <string>

class Manager {
private:
	int id;
	std::string name;
	std::string passwd;
public:
	int getId();
	std::string getName();
	std::string getPasswd();

	void setId();
	void setName();
	void setPasswd();

	void chageWorkShift();
};