//
// Created by Giles Pierre Carlos on 2019-03-12.
//

#ifndef PRACTICE_ARRAYALLOCATOR_H
#define PRACTICE_ARRAYALLOCATOR_H

#include <iostream>

using namespace std;

int * getDynamicArray(int numberOfElements) {
    int *arrayPtr = new int[numberOfElements];
    for(int i = 0; i < numberOfElements; i++) {
        cout << "Enter test " << i + 1 << ":";
        cin >> *(arrayPtr + i);
    }
    return arrayPtr;
}
#endif //PRACTICE_ARRAYALLOCATOR_H
