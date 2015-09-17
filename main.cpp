#include <iostream>
#include "List.h"
#include "String.h"
#include "Double.h"
#include "Integer.h"

int main() {
    std::cout << "Test task for Element R&D" << std::endl;
    List list;

    list.push_back(new Integer(10));
    list.push_back(new Double(3.1415926));
    list.push_back(new String("test string"));

    list.insert(1, new Integer(5));

    list.printAll();

    return 0;
}