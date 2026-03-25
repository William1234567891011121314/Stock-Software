#include <vector>
#include "product.hpp"
#include "cashier.hpp"

class CashierInt {
private:
	int id;
	int sales;
	std::vector<Cashier> cashiers;
public:
	int getId();
	int getSales();
	std::vector<Cashier> getCashiers();

	void setId();
	void setSales();
	void setCashiers();

	void sell(Product product);
};