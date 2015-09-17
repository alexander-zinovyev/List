#include <iostream>
#include "List.h"
#include "String.h"
#include "Double.h"
#include "Integer.h"

int main() {
    std::cout << "Test task for Element R&D" << std::endl;
    List list;

    //pushing some elements to the list
    Integer *integerElement = new Integer(10);
    list.push_back(integerElement);
    Double *doubleElement = new Double(3.1415926);
    list.push_back(doubleElement);
    String *stringElement = new String("test string");
    list.push_back(stringElement);

    //insert usage
    Integer *someAnotherInteger = new Integer(5);
    list.insert(1, someAnotherInteger);

    String *string = new String("one more test string");
    list.push_back(string);

    std::cout << "Printing all list objects using List::printAll()" << std::endl;
    list.printAll();

    //manual iterating through list
    std::cout << "Printing all list objects manually" << std::endl;
    for (Element *temp = list.begin(); temp != nullptr; temp = temp->next())
        temp->print();

    //erasing some elements from the list
    list.erase(1);
    list.erase(string);

    list.printAll();

    delete integerElement;
    delete doubleElement;
    delete stringElement;
    delete someAnotherInteger;
    delete string;

    return 0;
}