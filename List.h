//
// Created by s1dex on 18.09.15.
//

#ifndef LIST_LIST_H
#define LIST_LIST_H

#include "Element.h"

class List {
public:
    List();
    ~List();

    Element* begin();
    void printAll();
    void push_back(Element *element);

    void insert(int position, Element *element);

    void erase(int position, int count = 1);
    void erase(Element *element);

    bool empty();
    int size();
private:
    Element *first;
};


#endif //LIST_LIST_H
