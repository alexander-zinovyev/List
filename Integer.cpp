//
// Created by s1dex on 17.09.15.
//

#include <iostream>
#include "Integer.h"

Integer::Integer(int x) : data(x) { }

Integer::~Integer() { }

void Integer::setData(int x) {
    this->data = x;
}

int Integer::getData() {
    return this->data;
}

void Integer::print() {
    std::cout << this->data << std::endl;
}