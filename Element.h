//
// Created by s1dex on 17.09.15.
//

#ifndef LIST_ELEMENT_H
#define LIST_ELEMENT_H


/*
 * Two-sided list
 */
class Element {
public:
    Element();
    virtual ~Element();

    Element* previous();
    Element* next();
    void setPrevious(Element *);
    void setNext(Element *);

    void unlink();
    
    virtual void print() = 0;
private:
    Element *previousElement, *nextElement;
};


#endif //LIST_ELEMENT_H
