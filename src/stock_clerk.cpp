#include <string>
#include <vector>

#include "../include/stock_clerk.hpp"

//getters

int StockClerk::getId() {
    return id;
}

std::string StockClerk::getUserName() {
    return userName;
}

std::string StockClerk::getPasswd() {
    return passwd;
}

//setters

void StockClerk::setId(std::vector<StockClerk>* stockClerks) {
    int newId = rand() % 100000;
    for(int x = 0; x <= stockClerks->size(); x++) {
        if(newId == stockClerks->at(x).getId()){
            setId(stockClerks);
        }
    }
}

void StockClerk::setName(std::string* userName) {
    this->userName = *userName;
}

void StockClerk::setPasswd(std::string* passwd) {
    this->passwd = *passwd;
}

void StockClerk::addBatch(Batch* batch, std::vector<Batch>* stock) {
    stock->insert(stock->end(), *batch);
}