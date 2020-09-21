//
// Created by Erik Peterson on 9/21/20.
//

#ifndef LISTTYPES_VECTORWRAPPER_H
#define LISTTYPES_VECTORWRAPPER_H

#include <iostream>
#include <vector>

template<typename T>
class VectorWrapper {
public:
    void addToFront(const T& value) {
        theVector.insert(theVector.begin(), value);
    }

    void addToBack(const T& value) {
        theVector.push_back(value);
    }

    void printAll() {
        for ( T value : theVector) {
            std::cout << value << std::endl;
        }
    }

private:
    std::vector<T> theVector;

};


#endif //LISTTYPES_VECTORWRAPPER_H
