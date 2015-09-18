//
// Created by s1dex on 18.09.15.
//

#include "List.h"

List::List() : first(nullptr) { }

List::~List() { }

Element* List::begin() {
    return this->first;
}

bool List::empty() {
    return (this->first == nullptr);
}

int List::size() {
    int size = 0;
    Element *temp = this->begin();
    while (temp != nullptr) {
        size++;
        temp = temp->next();
    }
    return size;
}

void List::printAll() {
    Element *element = this->begin();
    while (element != nullptr) {
        element->print();
        element = element->next();
    }
}

/*
 * Position begins with 0
 */
void List::insert(int position, Element *element) {
    Element *temp = this->begin(), *prev = nullptr;
    for (int i = 0; i < position && temp != nullptr; i++) {
        prev = temp;
        temp = prev->next();
    }

    if (prev == nullptr) {
        if (this->begin() != nullptr) {
            element->setNext(this->begin());
            this->begin()->setPrevious(element);
        }
        this->first = element;
    } else {
        element->setNext(prev->next());
        if (prev->next() != nullptr)
            prev->next()->setPrevious(element);

        element->setPrevious(prev);
        prev->setNext(element);
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

            element->unlink();
            return;
        }
        temp = temp->next();
    }
}

void List::erase(int position, int count) {
    Element *temp = this->begin();
    for (int i = 0; i < position && temp != nullptr; i++)
        temp = temp->next();

    while (count-- && temp != nullptr) {
        if (temp == this->begin())
            this->first = temp->next();

        temp->unlink();
        temp = temp->next();
    }
}