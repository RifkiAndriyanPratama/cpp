#include <iostream>
using namespace std;

int main(){
    string barang[3] = {"Mie Ayam", "Bakso", "Pentol"};
    int harga[3] = {10000, 8000, 5000};
    int jumlahBarang = sizeof(barang) / sizeof(barang[0]);
    int pesanan;
    int qty;
    int total = 0;
    string lagi;

    do {
        // nampilin semua menu dan harga
        cout << "\n=== Daftar Menu ===" << endl;
        for(int i = 0; i < jumlahBarang; i++){
        cout << i+1 << ". " << barang[i] << " Rp."<< harga[i] << endl;
        }

        // input pesanan
        cout << "\nPilih menu 1 - " << jumlahBarang << endl;
        cout << "Pilih pesanan anda: ";
        cin >> pesanan;

        // ambil data dari array sesuai pilihan
        if(pesanan >= 1 && pesanan <= jumlahBarang){
            cout << "Jumlah pesanan " << barang[pesanan-1] << ": ";
            cin >> qty;

            int subtotal = harga[pesanan-1] * qty;
            total += subtotal;

            cout << "Anda memesan: " << qty << " " << barang[pesanan-1] 
                 <<  " (Rp: " << subtotal << ")" << endl;
        } else {
            cout << "Pesanan tidak valid" << endl;
        }

        // tanya lagi
        cout << "\nApakah mau pesan lagi? (y/n)";
        cin >> lagi;
    } while(lagi == "y" || lagi == "Y");
    // Cetak total
    cout << "\n=== Struk Pesanan ===" << endl;
    cout << "Total Bayar: Rp." << total << endl;

    return 0;
}
