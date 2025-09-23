#include <iostream>
#include <ostream>
using namespace std;

int main(){
    int a, b, pilihan;
    cout << "Masukkan angka 1: ";
    cin >> a;

    cout << "Masukkan angka 2: ";
    cin >> b;

    cout << "Masukkan pilihan: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << a + b << endl;
        break;

        case 2:
            cout << a - b << endl;
        break;

        case 3:
            cout << a * b << endl;
        break;

        case 4:
        if(b == 0){
            cout << "Tidak bisa dibagi 0";
        } else {
            cout << a / b << endl;
        }
        break;

        default:
            cout << "Tidak ada pilihan" << endl;
    }
}
