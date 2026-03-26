#include <iostream>
#include <vector>
#include <string>

#include "../include/manager.hpp"

void manager(std::vector<Manager>* managers, std::string *passwd, std::string *name) {
    //auth
    bool auth = false;
    for(int x = 0; x <= managers->size(); x++) {
        if(managers->at(x).getUserName() == *name && managers->at(x).getPasswd() == *passwd) {
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