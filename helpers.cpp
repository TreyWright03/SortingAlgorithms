#include "helpers.h"
#include <iostream>
#include <cstdlib> 
using namespace std;

void generateVector(vector<int>& ar, int size) {
    ar.clear();
    for (int i = 0; i < size; ++i) {
        ar.push_back(rand() % 1000);
    }
}

void printVector(const vector<int>& ar) {
    for (int i = 0; i < ar.size(); ++i) {
        cout << ar[i] << " ";
        if ((i + 1) % 10 == 0) cout << "\n"; 
    }
    cout << endl;
}
