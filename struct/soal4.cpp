#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int n, i, cari, arr[50];
    cout << "Masukkan jumlah angka: ";
    cin >> n;
    cout << "Masukkan " << n << " angka:\n";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Masukkan angka yang dicari: ";
    cin >> cari;

    // Variable to check if cari is found
    bool found = false;

    for (i = 0; i < n; i++) {
        if (arr[i] == cari) {
            cout << cari << " ditemukan pada lokasi " << i + 1 << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Tidak ditemukan!\n" << cari << " tidak termasuk dalam inputan" << endl;
    }

    return 0;
}
