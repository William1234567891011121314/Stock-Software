#include <vector>
#include "product.hpp"
#include "cashier.hpp"

class CashierInt {
private:
	int id;
	int sales;
	std::vector<Cashier*> cashiers;
public:
	int getId();
	int getSales();
	std::vector<Cashier*> getCashiers();

	void setId(std::vector<Cashier*>* cashiers);
	void setSales(int* sales);
	void setCashier(Cashier* cashier);
	void deleteCashier(int* id);

	void sell(Product* product);
};