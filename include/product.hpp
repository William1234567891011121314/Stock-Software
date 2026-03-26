#include <string>

class Product {
private:
	std::string name;
	std::string desc;
	int qtd;
public:
	std::string getName();
	std::string getDesc();
	int getQtd();

	void setName(std::string* name);
	void setDesc(std::string* desc);
	void setQtd(int qtd);
};