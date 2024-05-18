#include <iostream>
#include <cctype> // Untuk isalpha() dan isdigit() function

using namespace std;

// Fungsi untuk menghitung jumlah konsonan, vokal, dan numerik dalam sebuah kalimat
void hitungKonsonanVokalNumerik(string kalimat, int &konsonan, int &vokal, int &numerik) {
    // Inisialisasi variabel
    konsonan = 0;
    vokal = 0;
    numerik = 0;

    // Loop melalui setiap karakter dalam kalimat
    for(char karakter : kalimat) {
        // Periksa apakah karakter merupakan huruf
        if(isalpha(karakter)) {
            // Periksa apakah huruf tersebut adalah vokal
            if(tolower(karakter) == 'a' || tolower(karakter) == 'e' || tolower(karakter) == 'i' || tolower(karakter) == 'o' || tolower(karakter) == 'u') {
                vokal++;
            } else {
                konsonan++;
            }
        }
        // Periksa apakah karakter merupakan angka
        else if(isdigit(karakter)) {
            numerik++;
        }
    }
}

int main() {
    string kalimat;
    int konsonan, vokal, numerik;

    // Input kalimat dari pengguna
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    // Memanggil fungsi hitungKonsonanVokalNumerik
    hitungKonsonanVokalNumerik(kalimat, konsonan, vokal, numerik);

    // Menampilkan hasil
    cout << "Jumlah konsonan: " << konsonan << endl;
    cout << "Jumlah vokal: " << vokal << endl;
    cout << "Jumlah numerik: " << numerik << endl;

    return 0;
}
