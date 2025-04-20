#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int poin_a = 0, poin_b = 0;
    int streak_a = 0, streak_b = 0;

    for (int i = 0; i < n; i++) {
      // Jika hasilnya A
      if (s[i] == 'A') {
          poin_a += 3;
          streak_a++;
          streak_b = 0;  // reset streak B

          // Cek bonus jika A menang 3 kali berturut-turut
          if (streak_a == 3) {
              poin_a += 2;
              streak_a = 0;  // reset streak A
          }
      }
      else if (s[i] == 'B') {
        poin_b += 3;
        streak_b++;
        streak_a = 0;  // reset streak A

        if (streak_b == 3) {
          poin_b += 2;
          streak_b = 0;  // reset streak B
      }
      }
      else if (s[i] == 'C') {
        poin_a += 1;
        poin_b += 1;
        streak_a = 0;  // reset streak A
        streak_b = 0;  // reset streak B
    }
    
  }
  cout << "Poin A: " << poin_a << endl;
  cout << "Poin B: " << poin_b << endl;
  if (poin_a > poin_b) {
    cout << "Pemenangnya adalah pemain A" << endl;
  }
  else if (poin_b > poin_a) {
      cout << "Pemenangnya adalah pemain B" << endl;
  }
  else {
      cout << "Hasil pertandingan Seri!" << endl;
  }

}
/*
Algoritma atau logika penyelesaian program:
1. Pertama, program membaca input jumlah babak (n) dan string hasil setiap babak (s).
2. Lalu, dua variabel poin dan dua variabel streak diinisialisasi untuk masing-masing pemain.
3. Program melakukan perulangan sebanyak jumlah babak.
4. Di setiap babak:
   - Jika pemain A menang ('A'), dia dapat 3 poin, streak A bertambah, dan streak B di-reset.
   - Jika streak A mencapai 3 kali berturut-turut, bonus 2 poin ditambahkan, lalu streak A di-reset.
   - Jika pemain B menang ('B'), poin dan logika yang sama berlaku untuk pemain B.
   - Jika hasil seri ('C'), kedua pemain mendapat 1 poin, dan kedua streak di-reset.
5. Setelah perulangan selesai, poin akhir pemain A dan B ditampilkan.
6. Program membandingkan poin akhir:
   - Jika poin A lebih besar, pemain A menang.
   - Jika poin B lebih besar, pemain B menang.
   - Jika poinnya sama, maka hasil pertandingan dinyatakan seri.
*/
