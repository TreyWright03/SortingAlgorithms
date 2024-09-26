#include "selectionsort.h"
#include "mergesort.h"
#include "quicksort.h"
#include "helpers.h"

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr)); 
    vector<int> ar;

    // Selection Sort A
    generateVector(ar, 100);
    selectionSortA(ar);
    cout << "Selection Sort A (Swapping Each Time):" << endl;
    printVector(ar);

    // Selection Sort B
    generateVector(ar, 100);
    selectionSortB(ar);
    cout << "Selection Sort B (Swapping at the End):" << endl;
    printVector(ar);

    // Merge Sort
    generateVector(ar, 100);
    mergeSort(ar);
    cout << "Merge Sort:" << endl;
    printVector(ar);

    // Quicksort
    generateVector(ar, 100);
    quickSort(ar);
    cout << "Quicksort:" << endl;
    printVector(ar);

    return 0;
}
