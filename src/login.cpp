#include <iostream>
#include <string>

#include "../include/cashier.hpp"
#include "../include/manager.hpp"
#include "../include/stock_clerk.hpp"
#include "../include/batch.hpp"

#include "cashier_maze.cpp"
#include "manager_maze.cpp"
#include "stock_clerk_maze.cpp"

void login(std::vector<Cashier>* cashiers, std::vector<Manager>* managers, std::vector<StockClerk>* stockClerks, std::vector<Batch>* batches) {
    int opc;
    std::string name;
    std::string passwd;
    do{
        std::cout << "\nDigite o seu tipo de usuário:\n1 - Caixa\n2 - Gerente\n3 - Estoquista\n4 - Voltar\n\nSua escolha: ";
        std::cin >> opc;
        std::cout << "\nDigite a sua senha: ";
        std::cin >> passwd;
        std::cout << "\nDigite o seu nome: ";
        std::cin >> name;
        switch (opc) {
            case 1:
                cashier(cashiers, &passwd, &name);
                break;
            case 2:
                manager(managers, &passwd, &name);
                break;
            case 3:
                stockClerk(stockClerks, &passwd, &name);
                break;
            case 4:
                return;
            default:
                std::cout << "\nInput inválido!\n";
        };
    } while(opc > 4 || opc < 0);

    return;
};