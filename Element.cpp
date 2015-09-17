//
// Created by s1dex on 17.09.15.
//

#include "Element.h"

Element::Element() : previousElement(nullptr), nextElement(nullptr) { }
Element::~Element() { }

Element* Element::previous() {
    return this->previousElement;
}

Element* Element::next() {
    return this->nextElement;
}

void Element::setPrevious(Element *element) {
    this->previousElement = element;
}

void Element::setNext(Element *element) {
    this->nextElement = element;
}

void Element::erase() {
    if (this->previous() != nullptr)
        this->previous()->setNext(this->next());
    if (this->next() != nullptr)
        this->next()->setPrevious(this->previous());
}