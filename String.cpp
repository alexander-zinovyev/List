//
// Created by s1dex on 17.09.15.
//

#include "String.h"
#include <iostream>

String::String(std::string str) : data(str) { }

String::~String() { }

void String::setData(std::string str) {
    this->data = str;
}

std::string String::getData() {
    return this->data;
}

void String::print() {
    std::cout << this->data << std::endl;
}