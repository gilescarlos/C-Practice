//USEFUL FUNCTION POINTER
#include <cstdio>
#include "ArrayAllocator.h"
using namespace std;

void sortTestScores(int *testScores, int size);
double averageTestScore(int *testScores, int size);
void printTestScores(int *testScores, int size);

int main() {
    int numberOfTests;
    int *arrayPointer;

    cout << "Enter the number of test scores: ";
    cin >> numberOfTests;

    arrayPointer = getDynamicArray(numberOfTests);

    cout << "\nThe elements in the dynamic array: " << endl;
    for (int i = 0; i < numberOfTests; i++) {
        cout << *(arrayPointer + i) << " " << endl;
    }

    cout << "\nTest Scores Before Sorting: " << endl;
    printTestScores(arrayPointer, numberOfTests);

    cout << "\nTest Scores After Sorting: " << endl;
    sortTestScores(arrayPointer, numberOfTests);
    printTestScores(arrayPointer, numberOfTests);

    cout << "\nAverage Test Score: " << averageTestScore(arrayPointer, numberOfTests);


    return 0;
}

void sortTestScores(int *testScores, int size) {
    int *last = testScores + size;
    for (int *start = testScores; start < last - 1; start++) {
        for (int *next = start + 1; next < last; next ++) {
            if(*next < *start) {
                int temp = *start;
                *start = *next;
                *next = temp;
            }
        }
    }
}

double averageTestScore(int *testScores, int size) {
    int sum = 0;
    double average;
    int *current = testScores;
    for (int i = 0; i < size; i++) {
        sum += *current;
        current++;
    }
    average = (double) sum / size;
    return average;

}

void printTestScores(int *testScores, int size) {
    int *current = testScores;
    for (int i = 0; i < size; i++) {
        cout << "Test score " << i + 1 << ": " << *current << endl;
        current++;
    }
}