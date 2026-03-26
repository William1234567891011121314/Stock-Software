#include <vector>
#include <iostream>
#include <string>

#include "../include/cashier.hpp"

void cashier(std::vector<Cashier>* cashiers, std::string* passwd, std::string* name) {
    //auth
    bool auth = false;
    for(int x = 0; x <= cashiers->size(); x++){
        if(cashiers->at(x).getUserName() == *name && cashiers->at(x).getPasswd() == *passwd) {
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
};