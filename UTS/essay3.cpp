#include <iostream>
using namespace std;

int main() {
    int n, j, i, s;
    cout << "Masukkan Jumlah Baris: ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        // Loop untuk mencetak spasi
        for (s = i; s < n; s++) {
            cout << " ";
        }
        // Loop untuk mencetak bintang
        for (j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
