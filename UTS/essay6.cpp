#include <iostream>

// Function for addition
double penambahan(double a, double b) {
    return a + b;
}


// Function for subtraction
double pengurangan(double a, double b) {
    return a - b;
}

// Function for multiplication
double perkalian(double a, double b) {
    return a * b;
}

// Function for division
double pembagian(double a, double b) {
    if (b!= 0) {
        return a / b;
    } else {
        std::cout << "Tidak bisa dibagi oleh nol" << std::endl;
        return 0.0; // return a default value
    }
}

int main() {
    while (true) {
        std::cout << "Menu Operasi:" << std::endl;
        std::cout << "1. Penambahan" << std::endl;
        std::cout << "2. Pengurangan" << std::endl;
        std::cout << "3. Perk#include <iostream>

using namespace std;

// Function prototypes
void menu();
int tambah(int, int);
int kurang(int, int);
int kali(int, int);
int bagi(int, int);

int main() {
    menu();
    int num1, num2;
    int choice;
    cout << "Masukan dua angka: ";
    cin >> num1 >> num2;
    cout << "Menu" <<endl;
    cout << "1. Tambah\n2. Kurang\n3. Kali\n4. Bagi\nMasukan pilihan anda: ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Hasilnya adalah: " << tambah(num1, num2) << endl;
            break;
        case 2:
            cout << "Hasilnya adalah: " << kurang(num1, num2) << endl;
            break;
        case 3:
            cout << "Hasilnya adalah: " << kali(num1, num2) << endl;
            break;
        case 4:
            if (num2 != 0)
                cout << "Hasilnya adalah: " << bagi(num1, num2) << endl;
            else
                cout << "Error: Pembagian dengan nol tidak bisa!." << endl;
            break;
        default:
            cout << "Pilihan tidak ada!" << endl;
            break;
    }
    return 0;
}

void menu() {
    cout << "KALKULATOR\n";
}

int tambah(int num1, int num2) {
    return num1 + num2;
}

int kurang(int num1, int num2) {
    return num1 - num2;
}

int kali(int num1, int num2) {
    return num1 * num2;
}

int bagi(int num1, int num2) {
    return num1 / num2;
}alian" << std::endl;
        std::cout << "4. Pembagian" << std::endl;
        int pilihan;
        std::cin >> pilihan;

        if (pilihan == 5) {
            break;
        }

        double angka1, angka2;
        std::cout << "Masukkan angka pertama: ";
        std::cin >> angka1;
        std::cout << "Masukkan angka kedua: ";
        std::cin >> angka2;

        if (pilihan == 1) {
            std::cout << angka1 << " + " << angka2 << " = " << penambahan(angka1, angka2) << std::endl;
        } else if (pilihan == 2) {
            std::cout << angka1 << " - " << angka2 << " = " << pengurangan(angka1, angka2) << std::endl;
        } else if (pilihan == 3) {
            std::cout << angka1 << " * " << angka2 << " = " << perkalian(angka1, angka2) << std::endl;
        } else if (pilihan == 4) {
            std::cout << angka1 << " / " << angka2 << " = " << pembagian(angka1, angka2) << std::endl;
        } else {
            std::cout << "Pilihan tidak valid" << std::endl;
        }
    }

    return 0;
}