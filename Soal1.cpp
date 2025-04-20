#include <iostream>
using namespace std;

int main (){
  string nomor;
  cout << "Masukkan nomor kartu digital :";
  cin >> nomor;

  int panjang = nomor.length();
  if ((panjang == 14) && (nomor[0] = '6') && (nomor[1] = '5')){
    cout << "Tipe kartu : Nusantara"<< endl;
  }
  else if ((panjang == 16) && (nomor[0] = '7') && (nomor[1] = '7') || (nomor[1] = '8')){
    cout << "Tipe kartu : Garuda"<< endl;
  }
  else if ((panjang == 15) && (nomor[0] = '9') && (nomor[1] = '1')){
    cout << "Tipe kartu : Merdeka"<< endl;
  } else {
    cout << "Nomor kartu tidak sesuai dengan nomor kartu manapun";
  }
  



}