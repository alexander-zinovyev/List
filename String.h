//
// Created by s1dex on 17.09.15.
//

#ifndef LIST_STRING_H
#define LIST_STRING_H

#include "Element.h"
#include <string>

class String : public Element {
public:
    String(std::string str);
    ~String();
    void setData(std::string str);
    std::string getData();
    void print();
private:
    std::string data;
};


#endif //LIST_STRING_H
