#include <string>
#include <vector>
#include <cstdlib>

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

std::string Cashier::getUserName() {
    return userName;
}

//setters

void Cashier::setId(std::vector<Cashier>* cashiers) {
    int newId = rand() % 100000;
    for(int x = 0; x <= cashiers->size(); x++) {
        if(newId == cashiers->at(x).getId()){
            setId(cashiers);
        }
    }
}

void Cashier::setSales(int* sales) {
    this->sales = *sales;
}

void Cashier::setCommission(float* commission) {
    this->commission = *commission;
}

void Cashier::setWorkShift(WorkShift* workShift) {
    this->workShift = *workShift;
}

void Cashier::setPasswd(std::string* passwd) {
    this->passwd = *passwd;
}

void Cashier::setUserName(std::string* userName) {
    this->userName = *userName;
}

bool Cashier::assignInt(CashierInt* cashierInt) {
    return false;
    //TO DO
}