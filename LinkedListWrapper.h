//
// Created by Erik Peterson on 9/21/20.
//

#ifndef LISTTYPES_LINKEDLISTWRAPPER_H
#define LISTTYPES_LINKEDLISTWRAPPER_H

#include <iostream>
#include <list>

template<typename T>
class LinkedListWrapper {
public:
    void addToFront(T value) {
        theList.insert(theList.begin(), value);
    }

    void addToBack(T value) {
        theList.push_back(value);
    }

    void printAll() {
        for ( T value : theList) {
            std::cout << value << std::endl;
        }
    }

private:
    std::list<T> theList;
};


#endif //LISTTYPES_LINKEDLISTWRAPPER_H
