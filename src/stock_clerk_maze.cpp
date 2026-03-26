#include <string>
#include <vector>
#include <iostream>

#include "../include/stock_clerk.hpp"

void stockClerk(std::vector<StockClerk>* stockClerks, std::string* passwd, std::string *name){
    bool auth = false;
    for(int x = 0; x <= stockClerks->size(); x++) {
        if(stockClerks->at(x).getUserName() == *name && stockClerks->at(x).getPasswd() == *passwd) {
            auth = true;
            break;
        };
    };
    if(!auth){
        std::cout << "\nSenha e/ou usuário incorreto(s)!\n";
        return;
    }
    //
    return;
}