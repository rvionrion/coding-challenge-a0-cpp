/*
MENAMPILKAN ELEMEN ARRAY

Buatlah sebuah program yang memberikan output seperti dibawah ini dengan
menggunakan array yang sudah disediakan. Gunakan perulangan untuk memanggil
setiap elemen pada indeks arraynya.

Array = [20, 23, 25, 21, 29]

Output :
Isi elemen dengan indeks 0 : 20
Isi elemen dengan indeks 1 : 23
Isi elemen dengan indeks 2 : 25
Isi elemen dengan indeks 3 : 21
Isi elemen dengan indeks 4 : 29
*/

#include <iostream>

using namespace std;

int main() {
  int array[5] = {20, 23, 25, 21, 29};
  int panjang_data = 5;

  for (int index = 0; index < panjang_data; index++) {
    int nilai = array[index];
    cout << "Isi elemen dengan indeks " << index << " : " << nilai << "\n";
  }
}
