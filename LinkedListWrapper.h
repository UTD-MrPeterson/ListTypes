//
// Created by Erik Peterson on 9/21/20.
//

#ifndef LISTTYPES_LINKEDLISTWRAPPER_H
#define LISTTYPES_LINKEDLISTWRAPPER_H

#include <iostream>
#include <list>
#include "ListWrapper.h"

template<typename T>
class LinkedListWrapper : public ListWrapper<T> {
public:
    void addToFront(const T& value) override {
        theList.insert(theList.begin(), value);
    }

    void addToBack(const T& value) override {
        theList.push_back(value);
    }

    void printAll() override {
        for ( T value : theList) {
            std::cout << value << std::endl;
        }
    }

private:
    std::list<T> theList;
};


#endif //LISTTYPES_LINKEDLISTWRAPPER_H
