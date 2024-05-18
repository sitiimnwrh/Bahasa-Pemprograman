#include <iostream>
#include <vector>
using namespace std;

void cariBilangan(int arr[], int size, int x) {
    vector<int> indeks;
    for(int i = 0; i < size; i++) {
        if(arr[i] == x) {
            indeks.push_back(i);
        }
    }
     if (!indeks.empty()) {
        cout << "Data " << x << " ditemukan pada indeks ke ";
        for (int i = 0; i < indeks.size(); ++i) {
            cout << indeks[i];
            if (i != indeks.size() - 1) {
                cout << " dan ";
            }
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {12, 14, 15, 12, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 12;

    cariBilangan(arr, size, x);

    return 0;
}