/*
MIN MAX

Buatlah program yang dapat menerima inputan 4 buah bilangan bulat kemudian mencetak salah satu bilangan yang nilainya terbesar (MAX) dan mencetak salah satu bilangan yang nilainya terkecil (MIN).

*Input*
5
10
14
9

*Output*
Bilangan Terbesar: 14
Bilangan Terkecil: 5
*/

#include <iostream>

using namespace std;

int main() {
  int data_bilangan[4];

  for (int x = 0; x < 4; x++) {
    cout << "Bilangan " << (x + 1) << " : ";
    cin >> data_bilangan[x];
  }

  int max = data_bilangan[0];
  int min = data_bilangan[0];
  for (int x = 1; x < 4; x++) {
    if (data_bilangan[x] > max) {
      max = data_bilangan[x];
    }
    if (data_bilangan[x] < min) {
      min = data_bilangan[x];
    }
  }

  cout << "Bilangan Terbesar: " << max << "\n";
  cout << "Bilangan Terkecil: " << min << "\n";
}
