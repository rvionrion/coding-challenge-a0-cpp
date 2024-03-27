/*
PANTULAN BOLA

Bola dilemparkan keatas secara vertical setinggi X meter. Kemudian bola itu jatuh dan memantul secara beraturan. Setiap pantulan tingginya berkurang 3 meter. Bola akan diberhentikan jika tingginya sudah kurang dari 3 meter.

Buat program untuk menghitung:
- berapa banyak pantulan terjadi
- berapa panjang lintasan yang dilalui bola dari awal dilempar hingga bola
berhenti

*Contoh Input*
Tinggi lemparan bola: 20 meter

*Contoh output*
Pantulan ke 1 tingginya = 17 meter
Pantulan ke 2 tingginya = 14 meter
Pantulan ke 3 tingginya = 11 meter
Pantulan ke 4 tingginya = 8 meter
Pantulan ke 5 tingginya = 5 meter
Pantulan ke 6 tingginya = 2 meter
Jarak pantulan adalah 154 meter

*/

#include <iostream>

using namespace std;

int main() {
  int tinggi;
  cout << "Tinggi Lemparan Bola: ";
  cin >> tinggi;

  int jumlah_pantulan = 0;
  int panjang_lintasan = tinggi;

  while (tinggi > 3) {
    tinggi -= 3;
    jumlah_pantulan += 1;
    panjang_lintasan += tinggi;
    cout << "Pantulan ke " << jumlah_pantulan << " tingginya = " << tinggi << " meter\n";
  }

  panjang_lintasan *= 2;

  cout << "Jarak pantulan adalah " << panjang_lintasan << " meter\n";
}
