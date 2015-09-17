//
// Created by s1dex on 17.09.15.
//

#ifndef LIST_DOUBLE_H
#define LIST_DOUBLE_H

#include "Element.h"

class Double : public Element {
public:
    Double(double x);
    ~Double();
    void setData(double x);
    double getData();
    void print();

private:
    double data;
};


#endif //LIST_DOUBLE_H
