#include <iostream>
#include <vector>

using namespace std;

void cari_dan_tampilkan(const vector<vector<int>>& arr, int data) {
    bool ditemukan = false;
    int baris = -1, kolom = -1;

    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < arr[i].size(); ++j) {
            if (arr[i][j] == data) {
                ditemukan = true;
                baris = i;
                kolom = j;
                break;
            }
        }
        if (ditemukan) {
            break;
        }
    }

    if (ditemukan) {
        cout << "Data " << data << " berada pada posisi [" << baris << "][" << kolom << "]" << endl;
    } else {
        cout << "Data " << data << " tidak ditemukan dalam array." << endl;
    }
}

int main() {
    int baris, kolom;
    cout << "Masukkan jumlah baris dan kolom array: ";
    cin >> baris >> kolom;

    vector<vector<int>> array(baris, vector<int>(kolom));

    cout << "Masukkan elemen-elemen array:" << endl;
    for (int i = 0; i < baris; ++i) {
        for (int j = 0; j < kolom; ++j) {
            cin >> array[i][j];
        }
    }

    int data_dicari;
    cout << "Masukkan data yang ingin dicari: ";
    cin >> data_dicari;

    cari_dan_tampilkan(array, data_dicari);

    return 0;
}
