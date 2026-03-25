#include <string>

class StockClark {
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

	std::string addBatch();
};