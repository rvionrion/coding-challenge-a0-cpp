/*
POSITIF DAN NEGATIF

LATIHAN CODING

Buatlah program dengan inputan berupa penjumlahan dua buah angka (bilangan bulat).

Jika hasil penjumlahannya lebih besar dari 0
  maka outputnya adalah "Hasilnya adalah ..., merupakan bilangan bulat positif".
  
Jika hasilnya lebih kecil daripada 0
  maka outputnya adalah "Hasilnya adalah ..., merupakan bilangan bulat negatif".
*/

#include <iostream>

using namespace std;

int main() {
  int b1;
  int b2;

  cout << "Masukkan Bilangan ke-1: ";
  cin >> b1;

  cout << "Masukkan Bilangan ke-2: ";
  cin >> b2;

  int total = b1 + b2;

  if(total > 0) {
    cout << "Hasilnya adalah " << total << ", merupakan bilangan bulat positif";
  }
  else if(total < 0) {
    cout << "Hasilnya adalah " << total << ", merupakan bilangan bulat negatif";
  }
}
