#include <string>

#include "../include/product.hpp"

//getters

std::string Product::getName() {
    return name;
}

std::string Product::getDesc() {
    return desc;
}

int Product::getQtd() {
    return qtd;
}

//setters

void Product::setName(std::string* name) {
    this->name = *name;
}

void Product::setDesc(std::string* desc) {
    this->desc = *desc;
}

void Product::setQtd(int* qtd) {
    this->qtd = *qtd;
}