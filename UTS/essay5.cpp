#include <iostream>
using namespace std;

int main() {
    int angka1, angka2;

    // Meminta input dari pengguna
    cout << "Masukkan Angka Pertama : ";
    cin >> angka1;
    cout << "Masukkan Angka Kedua   : ";
    cin >> angka2;

    // Melakukan operasi aritmatika
    int penjumlahan = angka1 + angka2;
    int pengurangan = angka1 - angka2;
    int perkalian = angka1 * angka2;
    int pembagian = angka1 / angka2;

    // Menampilkan hasil operasi
    cout << "Penjumlahan : " << penjumlahan << endl;
    cout << "Pengurangan : " << pengurangan << endl;
    cout << "Perkalian   : " << perkalian << endl;
    cout << "Pembagian   : " << pembagian << endl;

    return 0;
}
