# 1. Jelaskan secara singkat apa itu paradigma dalam Bahasa Pemrograman?
## Jawaban 

*Paradigma pemrograman merupakan gaya, klasifikasi, dan pendekatan dalam penulisan program untuk memecahkan masalah dengan menggunakan bahasa pemrograman yang digunakan.*

# 2. Jelaskan apa yang dimaksud dengan model data, operator, seleksi dan fungsi ?
## Jawaban 
## Model data
 * Model data merujuk pada cara data direpresentasikan, disimpan, dan dimanipulasi dalam suatu program.
## Operator
* Operator adalah simbol atau fungsi dalam bahasa pemrograman yang digunakan untuk melakukan operasi tertentu pada operand. Contohnya termasuk operator matematika seperti penjumlahan (+), pengurangan (-), perkalian (*), pembagian (/), serta operator logika seperti AND, OR, NOT.
## Seleksi
* Seleksi mengacu pada kontrol aliran dalam program yang memungkinkan pengecekan kondisi tertentu dan melakukan tindakan berdasarkan hasil pengecekan tersebut.
## Fungsi
* Fungsi adalah blok kode yang dirancang untuk melakukan tugas tertentu. Fungsi biasanya menerima input, melakukan operasi pada input tersebut, dan kemudian mengembalikan hasilnya. Fungsi juga dapat dipanggil berulang kali dari bagian-bagian berbeda dari program.
 

# 3. Jelaskan apa yang dimaksud perulangan (Looping Statment) dibawah ini :
```int n, _, i, _;
	cout<< "Masukkan Jumlah Baris : "
	cin >> n;
    for (i= 1; i<= _; i++) {
        for (s = i; _ <n; _++)
        cout << " ";
        for (j = 1; _ <= i; _++)
        cout << "*"
        cout << "\n";
    }
```
# Pecahkan perulangan diatas, berikan penjelasan terhadap program tersebut dan keluaran dari program tersebut!
## Jawaban 
## (essay3.cpp)

* pola perulangan di atas ada segitiga terbalik dengan berbentuk bintang yang tingginya sesuai dengan jumlah baris yang dimasukkan oleh pengguna. Setiap baris memiliki jumlah bintang yang sesuai dengan nomor barisnya. Spasi sebelum bintang juga bertambah seiring dengan peningkatan nomor baris.

# 4. Buatlah program sederhana dengan hasil akhir seperti berikut :

```
	> g++ soal4.cc -o soal4 && ./soal4
      Berarti Usia Kalian sekarang adalah 21 Tahun
    
```
## Jawaban 
## (essay4.cpp)

# 5. Buatlah program sederhana dengan hasil akhir seperti berikut :
```
	> g++ soal5.cc -o soal5 && ./soal5
      Masukkan Angka Pertama : 10 
      Masukkan Angka Kedua   : 2
      Penjumlahan : 12 
      Pengurangan : 8 
      Perkalian   : 20 
      Pembagian   : 5
```
# Jawaban 
## (essay5.cpp)

# 6. Lengkapi penggalan source code berikut sehinggan bisa berfungsi dengan baik :
``` 
int main(){
	menu();
	tambah();
	kurang();
	kali();
	bagi();
	return 0;
}
```
# Jawaban 
## (essay6.cpp)

# 7. Buatlah Diagram Alur/Flow yang sesuai dengan source code yang anda lengkapi (soal nomor 6)
## (diagramflow7.puml)