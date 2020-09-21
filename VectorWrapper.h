//
// Created by Erik Peterson on 9/21/20.
//

#ifndef LISTTYPES_VECTORWRAPPER_H
#define LISTTYPES_VECTORWRAPPER_H

#include <iostream>
#include <vector>
#include "ListWrapper.h"

template<typename T>
class VectorWrapper : public ListWrapper<T> {
public:
    void addToFront(const T& value) override {
        theVector.insert(theVector.begin(), value);
    }

    void addToBack(const T& value) override {
        theVector.push_back(value);
    }

    void printAll() override {
        for ( T value : theVector) {
            std::cout << value << std::endl;
        }
    }

private:
    std::vector<T> theVector;
};


#endif //LISTTYPES_VECTORWRAPPER_H
