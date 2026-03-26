#include "../include/batch.hpp"
#include <chrono>

//getters

int Batch::getId() {
    return this->id;
};

float Batch::getCost() {
    return this->cost;
};

float Batch::getSalePrice() {
    return this->salePrice;
};

std::chrono::time_point<std::chrono::steady_clock> Batch::getExpDate() {
    return this->expDate;
};

std::chrono::time_point<std::chrono::steady_clock> Batch::getMnfctDate() {
    return this->mnfctDate;    
};

std::string Batch::getLocation() {
    return this->location;
};

Product Batch::getProduct() {
    return this->product;
};

//setters

void Batch::setId(int* id) {
    this->id = *id;
};

void Batch::setCost(float* cost) {
    this->cost = *cost;
};

void Batch::setSalePrice(float* salePrice) {
    this->salePrice = *salePrice;
};

void Batch::setExpDate(std::chrono::time_point<std::chrono::steady_clock>* expDate) {
    this->expDate = *expDate;
};

void Batch::setMnftcDate(std::chrono::time_point<std::chrono::steady_clock>* mnfctDate) {
    this->mnfctDate = *mnfctDate;
};

void Batch::setLocation(std::string* location) {
    this->location = *location;
};

void Batch::setProduct(Product* product) {
    this->product = *product;
};