#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Fungsi untuk menukar dua elemen
void tukar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Fungsi untuk mengurutkan array menggunakan Insertion Sort
void insertion_sort(vector<int> &data) {
    int n = data.size();
    for (int i = 1; i < n; ++i) {
        int key = data[i];
        int j = i - 1;

        // Geser elemen dari data[0..i-1], yang lebih besar dari key, ke satu posisi ke depan dari posisi sekarang
        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = key;
        
        // Menampilkan array pada setiap langkah pengurutan
        cout << "Langkah " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << data[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    srand((unsigned)time(0)); // Seed untuk pengacakan angka
    int n;
    vector<int> data;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    // Mengisi data dengan angka acak
    for (int i = 0; i < n; ++i) {
        data.push_back(rand() % 100); // Angka acak antara 0 dan 99
    }

    cout << "Data sebelum diurutkan: ";
    for (int i = 0; i < n; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;

    cout << "Proses Insertion Sort:" << endl;
    insertion_sort(data);

    cout << "Data setelah diurutkan: ";
    for (int i = 0; i < n; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}