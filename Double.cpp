//
// Created by s1dex on 17.09.15.
//

#include "Double.h"
#include <iostream>

Double::Double(double x) : data(x) { }

Double::~Double() { }

void Double::setData(double x) {
    this->data = x;
}

double Double::getData() {
    return this->data;
}

void Double::print() {
    std::cout << this->data << std::endl;
}