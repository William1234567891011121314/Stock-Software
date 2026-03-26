#include <chrono>
#include <string>
#include "product.hpp"

class Batch {
private:
	int id;
	float cost;
	float salePrice;
	std::chrono::time_point<std::chrono::steady_clock> expDate;
	std::chrono::time_point<std::chrono::steady_clock> mnfctDate;
	std::string location;
	Product product;

public:
	int getId();
	float getCost();
	float getSalePrice();
	std::chrono::time_point<std::chrono::steady_clock> getExpDate();
	std::chrono::time_point<std::chrono::steady_clock> getMnfctDate();
	std::string getLocation();
	Product getProduct();

	void setId(int* id);
	void setCost(float* cost);
	void setSalePrice(float* salePrice);
	void setExpDate(std::chrono::time_point<std::chrono::steady_clock>* expDate);
	void setMnftcDate(std::chrono::time_point<std::chrono::steady_clock>* mnfctDate);
	void setLocation(std::string* location);
	void setProduct(Product* product);
};