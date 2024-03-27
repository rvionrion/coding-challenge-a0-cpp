/*
NILAI KUADRAT

Diberikan sebuah nilai (X) berupa bilangan bulat postif.
Buatkan sebuah program yang dapat menampilkan nilai kuadrat bilangan dari 1
sampai X.

*Contoh Tampilan Program*
N          N^2
===============
1          1
2          4
3          9
4          16
5          25


*/

#include <iostream>

using namespace std;

int main() {
  int bilangan_x;

  cout << "Masukkan Nilai X: ";
  cin >> bilangan_x;

  cout << "N\t\tN^2\n";
  cout << "=====================\n";
  for (int n = 1; n <= bilangan_x; n++) {
    cout << n << "\t\t" << (n * n) << "\n";
  }
}
