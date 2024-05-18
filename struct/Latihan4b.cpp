#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Fungsi untuk mencari kata dalam kalimat
vector<string> cariKata(string kalimat, string kata) {
    vector<string> hasil;
    size_t pos = kalimat.find(kata); // Mencari posisi pertama kemunculan kata dalam kalimat

    // Melakukan pencarian kata dalam kalimat sampai tidak ditemukan lagi
    while (pos != string::npos) {
        hasil.push_back(kata); // Menambahkan kata ke dalam vector hasil
        pos = kalimat.find(kata, pos + 1); // Mencari kemunculan kata selanjutnya setelah posisi sebelumnya
    }

    return hasil;
}

int main() {
    string kalimat, kata;

    // Input kalimat dari pengguna
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    // Input kata yang akan dicari
    cout << "Masukkan kata yang ingin dicari: ";
    cin >> kata;

    // Mengubah kalimat dan kata menjadi lowercase untuk pencarian yang case-insensitive
    transform(kalimat.begin(), kalimat.end(), kalimat.begin(), ::tolower);
    transform(kata.begin(), kata.end(), kata.begin(), ::tolower);

    // Mencari kata dalam kalimat
    vector<string> hasil = cariKata(kalimat, kata);

    // Menampilkan hasil
    if (hasil.empty()) {
        cout << "Kata tidak ditemukan dalam kalimat." << endl;
    } else {
        cout << "Kata \"" << kata << "\" ditemukan dalam kalimat sebanyak " << hasil.size() << " kali." << endl;
        cout << "Posisi kemunculan kata: ";
        for (size_t i = 0; i < hasil.size(); ++i) {
            cout << hasil[i];
            if (i != hasil.size() - 1) {
                cout << ", ";
            }
        }
        cout << endl;
    }

    return 0;
}
