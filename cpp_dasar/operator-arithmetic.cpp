#include <iostream>
using namespace std;

int main(){
   int angka1;
   int angka2;
   char operasi;
   int hasil;

   // input angka 1
   cout << "Masukkan angka 1: ";
   cin >> angka1;
   
   // input operasi
   cout << "Masukkan Operasi (+, -, /, %): ";
   cin >> operasi;

   // input angka 2
   cout << "Masukkan angka 2: ";
   cin >> angka2;

   // menangani kondisi input operasi
   if (operasi == '+'){
      hasil = angka1 + angka2;
      cout << "Hasil Penjumlahan: " << hasil;
   } else if (operasi == '-') {
      hasil = angka1 - angka2;
      cout << "Hasil Pengurangan: " << hasil;
   } else if (operasi == '/') {
      hasil = angka1 / angka2;
      cout << "Hasil Pembagian: " << hasil;
   } else if (operasi == '%') {
      hasil = angka1 % angka2;
      cout << "Hasil Modulus: " << hasil;
   } else {
      cout << "Operasi tidak valid";
   }
}
