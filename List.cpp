//
// Created by s1dex on 18.09.15.
//

#include "List.h"

List::List() : first(nullptr) { }

List::~List() {
    Element *temp = this->begin(), *nextElement;
    while (temp != nullptr) {
        nextElement = temp->next();
        delete temp;
        temp = nextElement;
    }
}

Element* List::begin() {
    return this->first;
}

void List::printAll() {
    Element *element = this->begin();
    while (element != nullptr) {
        element->print();
        element = element->next();
    }
}

void List::insert(int position, Element *element) {
    Element *temp = this->begin();
    for (int i = 1; i < position && temp != nullptr; i++)
        temp = temp->next();

    if (temp == nullptr) {
        this->first = element;
    } else {
        if (temp->next() != nullptr) {
            temp->next()->setPrevious(element);
            element->setNext(temp->next());
        }
        temp->setNext(element);
        element->setPrevious(temp);
    }
}

void List::push_back(Element *element) {
    Element *temp = this->begin();
    if (temp == nullptr) {
        this->first = element;
        return;
    }

    while (temp->next() != nullptr) {
        temp = temp->next();
    }

    temp->setNext(element);
    element->setPrevious(temp);
}

void List::erase(Element *element) {
    //we need to make sure this element belongs to our list
    Element *temp = this->begin();
    while (temp != nullptr) {
        if (temp == element) {
            if (element == this->begin())
                this->first = element->next();

            element->erase();
            delete element;
            return;
        }
        temp = temp->next();
    }
}

void List::erase(int position, int count) {
    Element *temp = this->begin();
    for (int i = 1; i < position && temp != nullptr; i++)
        temp = temp->next();

    while (count-- && temp != nullptr) {
        Element *nextElement = temp->next();
        if (temp == this->begin())
            this->first = nextElement;

        temp->erase();
        delete temp;
        temp = nextElement;
    }
}