# Fungsi Perkalian
def perkalian(a, b):
    return a * b

# Fungsi Pembagian
def pembagian(a, b):
    if b != 0:
        return a / b
    else:
        return "Tidak bisa dibagi oleh nol"
    
# Fungsi Penjumlahan
def penjumlahan(a, b):
    return a + b

# Fungsi Pengurangan
def pengurangan(a, b):
    return a - b

angka1 = float(input("Masukan angka pertama: "))
angka2 = float(input("Masukan angka kedua: "))

print("Hasil perkalian: ", (angka1), "*", (angka2), "=", perkalian(angka1, angka2))
print("Hasil pembagian: ", (angka1), "/", (angka2), "=", pembagian(angka1, angka2))
print("Hasil penjumlahan: ", (angka1), "+", (angka2), "=", penjumlahan(angka1, angka2))
print("Hasil pengurangan: ", (angka1), "-", (angka2), "=", pengurangan(angka1, angka2))