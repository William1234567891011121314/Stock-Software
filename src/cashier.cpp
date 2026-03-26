#include <string>
#include <vector>

#include "../include/cashier.hpp"
#include "../include/work_shift.hpp"
#include "../include/cashier_int.hpp"

//getters

int Cashier::getId() {
    return id;
}

int Cashier::getSales() {
    return sales;
}

float Cashier::getCommission() {
    return commission;
}

WorkShift Cashier::getWorkShift() {
    return workShift;
}

std::string Cashier::getPasswd() {
    return passwd;
}

//setters

void Cashier::setId(std::vector<Cashier>* cashiers) {
    int newId = rand() % 100000;
    for(int x = 0; x <= cashiers->size(); x++) {
        if(newId == cashiers->at(x).getId()){
            setId(cashiers);
        }
    }
    return;
}