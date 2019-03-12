//USEFUL FUNCTION POINTER
#include <iostream>

using namespace std;

int getModeValue(int *arrayPtr, int numberOfIntegers);
int *getDynamicArray(int numberOfElements);
void displayArray(int *arrayPtr, int size);

int main() {
    int numberOfIntegers;
    int *arrayPointer;
    int modeValue;

    cout << "Enter the number of elements: ";
    cin >> numberOfIntegers;

    arrayPointer = getDynamicArray(numberOfIntegers);

    cout << "\nIntegers stored in the dynamic array: \n";
    displayArray(arrayPointer, numberOfIntegers);

    modeValue = getModeValue(arrayPointer, numberOfIntegers);

    if (modeValue == -1) {
        cout << "No values occur more than once" << endl;
    } else {
        cout << "Mode Value: " << modeValue << endl;
    }

    return 0;
}

int getModeValue(int *arrayPtr, int numberOfIntegers) {
    int mode = -1;
    int current;
    int count;

    for (int i = 0; i < numberOfIntegers; i++) {
        current = *(arrayPtr + i);
        count = 0;
        for (int j = 0; j < numberOfIntegers; j++) {
            if (current == *(arrayPtr + j)) {
                count++;
            }
        }
        if (count > 1 && count > mode)
            mode = current;
    }
    return mode;
}


int *getDynamicArray(int numberOfElements) {
    int *arrayPtr = new int[numberOfElements];
    for(int i = 0; i < numberOfElements; i++) {
        cout << "Enter the integer " << i + 1 << ": ";
        cin >> *(arrayPtr + i);
    }
    return arrayPtr;
}

void displayArray(int *arrayPtr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arrayPtr + i) << "";
        cout << endl;
    }
}
