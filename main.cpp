#include <iostream>
#include "VectorWrapper.h"
#include "LinkedListWrapper.h"

int main() {
    VectorWrapper<int> vectorWrapper;
    vectorWrapper.addToFront(5);
    vectorWrapper.addToFront(2);
    vectorWrapper.addToBack(10);
    vectorWrapper.printAll();

    LinkedListWrapper<int> linkedListWrapper;
    linkedListWrapper.addToFront(5);
    linkedListWrapper.addToFront(2);
    linkedListWrapper.addToBack(10);
    linkedListWrapper.printAll();

    return 0;
}
