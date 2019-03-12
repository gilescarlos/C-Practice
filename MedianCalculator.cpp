//USEFUL FUNCTION POINTER
#include <iostream>

using namespace std;

double getMedianValue(int *arrayPtr, int numberOfIntegers);
int *getDynamicArray(int numberOfElements);
void displayArray(int *arrayPtr, int size);
void sortValues(int *arrayPointer, int size);

int main() {
    int numberOfIntegers;
    int *arrayPointer;
    int medianValue;

    cout << "Enter the number of elements: ";
    cin >> numberOfIntegers;

    arrayPointer = getDynamicArray(numberOfIntegers);

    cout << "\nIntegers stored in the dynamic array: \n";
    displayArray(arrayPointer, numberOfIntegers);

    sortValues(arrayPointer, numberOfIntegers);
    cout << "Sorted Values: " << endl;
    displayArray(arrayPointer, numberOfIntegers);

    medianValue = getMedianValue(arrayPointer, numberOfIntegers);

    cout << "Median Value: " << medianValue << endl;

    return 0;
}

double getMedianValue(int *arrayPtr, int numberOfIntegers) {
    double median;

    if (numberOfIntegers % 2 == 0) {
        median = (*(arrayPtr + (numberOfIntegers/2)) + *(arrayPtr + (numberOfIntegers/2 + 1)))/2;
    } else {
        median = *(arrayPtr + (numberOfIntegers/2));
    }

    return median;
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

void sortValues(int *arrayPointer, int size) {
    int *last = arrayPointer + size;
    for (int *start = arrayPointer; start < last - 1; start++) {
        for (int *next = start + 1; next < last; next ++) {
            if(*next < *start) {
                int temp = *start;
                *start = *next;
                *next = temp;
            }
        }
    }
}
