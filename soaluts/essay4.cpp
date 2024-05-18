#include <iostream>

// Function for multiplication
double perkalian(double a, double b) {
    return a * b;
}

// Function for subtraction
double pengurangan(double a, double b) {
    return a - b;
}

// Function for addition
double penambahan(double a, double b) {
    return a + b;
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
        std::cout << "Pilih operasi:" << std::endl;
        std::cout << "1. Perkalian" << std::endl;
        std::cout << "2. Pengurangan" << std::endl;
        std::cout << "3. Penambahan" << std::endl;
        std::cout << "4. Pembagian" << std::endl;
        std::cout << "5. Keluar" << std::endl;
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
            std::cout << angka1 << " * " << angka2 << " = " << perkalian(angka1, angka2) << std::endl;
        } else if (pilihan == 2) {
            std::cout << angka1 << " - " << angka2 << " = " << pengurangan(angka1, angka2) << std::endl;
        } else if (pilihan == 3) {
            std::cout << angka1 << " + " << angka2 << " = " << penambahan(angka1, angka2) << std::endl;
        } else if (pilihan == 4) {
            std::cout << angka1 << " / " << angka2 << " = " << pembagian(angka1, angka2) << std::endl;
        } else {
            std::cout << "Pilihan tidak valid" << std::endl;
        }
    }

    return 0;
}