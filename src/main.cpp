#include <iostream>
#include <vector>

#include "../include/cashier.hpp"
#include "../include/manager.hpp"
#include "../include/stock_clerk.hpp"
#include "../include/batch.hpp"

#include "login.cpp"

int main() {
    std::vector<Cashier> cashiers;
    std::vector<Manager> managers;
    std::vector<StockClerk> stockClerks;
    std::vector<Batch> batches; 
    login(&cashiers, &managers, &stockClerks, &batches);
    return 0;
}