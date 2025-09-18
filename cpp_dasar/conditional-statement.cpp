#include <iostream>
using namespace std;

int main(){
    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;

    // buat kondisi dimana ketika hasil dari modulus 2 adalah sisa 0 maka dia akan genap
    if(angka % 2 == 0){
        cout << angka << " Itu genap";
    } else {
        cout << angka << " Itu ganjil";
    }
}
