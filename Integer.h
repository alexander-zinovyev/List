//
// Created by s1dex on 17.09.15.
//

#ifndef LIST_INTEGER_H
#define LIST_INTEGER_H

#include "Element.h"

class Integer : public Element {
public:
    Integer(int x = 0);
    ~Integer();
    int getData();
    void setData(int x);
    void print();

private:
    int data;
};


#endif //LIST_INTEGER_H
