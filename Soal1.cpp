#include <iostream>
using namespace std;

int main (){
  string nomor;
  bool valid = false; //untuk meriksa apakah nomor kartu cocok di salah satu tipe
  int panjang;
  int digit , posisiDariKanan;
  int total = 0;
  cout << "Masukkan nomor kartu digital :";
  cin >> nomor;

  panjang = nomor.length(); // HItung panjang dari nomor kartu

  //Cek tipe kartu berdasarkan panjang dan digit awal 
  if ((panjang == 14) && (nomor[0] == '6') && (nomor[1] == '5')){
    cout << "Tipe kartu : Nusantara"<< endl;
    valid = true;
  }
  else if ((panjang == 16) && (nomor[0] == '7') && (nomor[1] == '7') || (nomor[1] == '8')){
    cout << "Tipe kartu : Garuda"<< endl;
    valid = true;
  }
  else if ((panjang == 15) && (nomor[0] == '9') && (nomor[1] == '1')){
    cout << "Tipe kartu : Merdeka"<< endl;
    valid = true;
  } else {
    cout << "Nomor kartu tidak sesuai dengan nomor kartu manapun";
  }

  //cek validasi nya
  if (valid){
    for (int i = panjang - 1; i >= 0; i--){
      digit = nomor[i] - '0'; //mengubah char jadi angka
      posisiDariKanan = panjang - i;

      if (posisiDariKanan % 2 == 0){
        digit *= 2;
        if (digit > 9){
          digit = (digit/10) + (digit%10);
        }
      }
      total += digit;
    }    
    if (total % 10 == 0){
      cout << "Nomor Kartu VALID";
    } else {
      cout << "Nomor Kartu TIDAK VALID";
    }
  }


}
/*
1. Masukkan nomor digitalnya.
2. Panjang nomor dicek :
     - Panjang 14 dan awalnya '65' => Kartu Nusantara
     - Panjang 16 dan awalnya '77' atau '78' => Kartu Garuda
     - Panjang 15 dan awalnya '91' => Kartu Merdeka
  3. Jika nomor sesuai salah satu tipe, lanjut ke validasi menggunakan Algoritma Luhn:
     a. Iterasi dari digit paling kanan ke kiri.
     b. Hitung posisi dari kanan (posisi ke-1, ke-2, dst).
     c. Jika digit berada di posisi genap:
        - Kalikan dengan 2.
        - Jika hasil > 9, jumlahkan digit-digitnya (contoh: 16 jadi 1+6 = 7).
     d. Akumulasi semua nilai digit ke dalam `total`.
  4. Setelah perulangan, jika total habis dibagi 10, maka kartu VALID.
     Jika tidak, maka kartu TIDAK VALID.
  5. Jika nomor kartu tidak sesuai tipe manapun, langsung diberi pesan tidak sesuai.
*/