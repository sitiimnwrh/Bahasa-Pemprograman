#include <iostream>
using namespace std;

int main() {
    int tahun_lahir, tahun_sekarang = 2024, usia;
    
    cout << "Masukkan Tahun Lahir Kalian: ";
    cin >> tahun_lahir;

    // Menghitung usia
    usia = tahun_sekarang - tahun_lahir;

    // Menampilkan hasil
    cout << "Berarti Usia Kalian sekarang adalah " << usia << " Tahun" << endl;

    return 0;
}
