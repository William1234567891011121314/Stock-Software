#include <cstdlib>
#include <vector>
#include <stdlib.h>

#include "../include/product.hpp"
#include "../include/cashier.hpp"
#include "../include/cashier_int.hpp"

//getters

int CashierInt::getId() {
    return id;
}

int CashierInt::getSales() {
    return sales;
}

std::vector<Cashier>* CashierInt::getCashiers() {
    return cashiers;
}

//setters

void CashierInt::setId(std::vector<CashierInt>* cashiersInt) {
    int newId = rand() % 100000;
    for(int x = 0; x <= cashiersInt->size(); x++) {
        if(newId == cashiersInt->at(x).getId()){
            setId(cashiersInt);
        }
    }
}

void CashierInt::setSales(int* sales){
    this->sales = *sales;
}

void CashierInt::setCashier(Cashier* cashier) {
    cashiers.add(*cashier);
}

void CashierInt::deleteCashier(int* id) {
    for(int x; x <= cashiers.size(); x++) {
        if(cashiers.at(x).id == *id) {
            cashiers.at(x).erase()
            return;
        }
    }
}

void sell(Product* product) {
    product->setQtd(product->getQtd() - 1);
};