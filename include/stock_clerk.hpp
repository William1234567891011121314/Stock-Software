#include <string>
#include <vector>
#include "batch.hpp"

class StockClerk {
private:
	int id;
	std::string userName;
	std::string passwd;
public:
	int getId();
	std::string getUserName();
	std::string getPasswd();

	void setId(std::vector<StockClerk>* stockClerks);
	void setName(std::string* userName);
	void setPasswd(std::string* passwd);

	void addBatch(Batch* batch, std::vector<Batch>* stock);
};