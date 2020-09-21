//
// Created by Erik Peterson on 9/21/20.
//

#ifndef LISTTYPES_LISTWRAPPER_H
#define LISTTYPES_LISTWRAPPER_H

template<typename T>
class ListWrapper {
    virtual void addToFront(const T& value) = 0;
    virtual void addToBack(const T& value) = 0;
    virtual void printAll() = 0;
};


#endif //LISTTYPES_LISTWRAPPER_H
