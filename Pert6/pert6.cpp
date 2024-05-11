#include <iostream>
#include <string>
using namespace std;

void tampilkan_menu_utama() {
    cout << "Menu Jualan" << endl;
    cout << "1. Teh" << endl;
    cout << "2. Kopi" << endl;
    cout << "3. Keluar" << endl;
}

void tampilkan_menu_teh() {
    cout << "\nMenu Teh" << endl;
    cout << "1. Harga" << endl;
    cout << "2. Qty" << endl;
    cout << "3. Total" << endl;
    cout << "4. Kembali ke Menu Utama" << endl; // Tambahkan opsi untuk kembali
}

void tampilkan_menu_kopi() {
    cout << "\nMenu Kopi" << endl;
    cout << "1. Harga" << endl;
    cout << "2. Qty" << endl;
    cout << "3. Total" << endl;
    cout << "4. Kembali ke Menu Utama" << endl; // Tambahkan opsi untuk kembali
}

void tampilkan_harga_barang(string barang) {
    if (barang == "Teh") {
        cout << "\nHarga Teh: Rp.15.000" << endl;
    } else if (barang == "Kopi") {
        cout << "\nHarga Kopi: Rp.20.000" << endl;
    }
}

float hitung_total(float harga, int qty) {
    return harga * qty;
}

int main() {
    string pilihan_utama, pilihan_teh, pilihan_kopi;
    int qty_teh, qty_kopi;
    while (true) {
        tampilkan_menu_utama();
        cout << "Pilih menu (1/2/3): ";
        cin >> pilihan_utama;

        if (pilihan_utama == "1") {
            while (true) {
                tampilkan_menu_teh();
                cout << "Pilih submenu (1/2/3/4): ";
                cin >> pilihan_teh;

                if (pilihan_teh == "1") {
                    tampilkan_harga_barang("Teh");
                } else if (pilihan_teh == "2") {
                    cout << "Masukkan jumlah Teh yang ingin dibeli: ";
                    cin >> qty_teh;
                } else if (pilihan_teh == "3") {
                    float total_teh = hitung_total(15000, qty_teh); // Ubah harga ke dalam satuan rupiah
                    cout << "Total harga Teh: Rp." << total_teh << endl;
                } else if (pilihan_teh == "4") {
                    break;
                } else {
                    cout << "Pilihan tidak valid." << endl;
                }
            }
        } else if (pilihan_utama == "2") {
            while (true) {
                tampilkan_menu_kopi();
                cout << "Pilih submenu (1/2/3/4): ";
                cin >> pilihan_kopi;

                if (pilihan_kopi == "1") {
                    tampilkan_harga_barang("Kopi");
                } else if (pilihan_kopi == "2") {
                    cout << "Masukkan jumlah Kopi yang ingin dibeli: ";
                    cin >> qty_kopi;
                } else if (pilihan_kopi == "3") {
                    float total_kopi = hitung_total(20000, qty_kopi); // Ubah harga ke dalam satuan rupiah
                    cout << "Total harga Kopi: Rp." << total_kopi << endl;
                } else if (pilihan_kopi == "4") {
                    break;
                } else {
                    cout << "Pilihan tidak valid." << endl;
                }
            }
        } else if (pilihan_utama == "3") {
            cout << "Terima kasih telah menggunakan program ini." << endl;
            break;
        } else {
            cout << "Pilihan tidak valid." << endl;
        }
    }
    return 0;
}
