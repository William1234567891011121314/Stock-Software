#include <string>
#include <cstdlib>
#include <vector>

#include "../include/manager.hpp"
#include "../include/work_shift.hpp"

//getters

int Manager::getId() {
    return id;
}

std::string Manager::getUserName() {
    return userName;
}

std::string Manager::getPasswd() {
    return passwd;
}

//setters

void Manager::setId(std::vector<Manager>* managers) {
    int newId = rand() % 100000;
    for(int x = 0; x <= managers->size(); x++) {
        if(newId == managers->at(x).getId()){
            setId(managers);
        }
    }
}

void Manager::setName(std::string* userName) {
    this->userName = *userName;
}

void Manager::setPasswd(std::string* passwd) {
    this->passwd = *passwd;
}

void changeWorkShift(Cashier* cashier, WorkShift* workShift) {
    cashier->setWorkShift(workShift);
}