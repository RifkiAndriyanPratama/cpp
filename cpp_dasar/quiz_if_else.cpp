/*Seorang siswa akan mengikuti ujian. Jika nilai siswa lebih besar atau sama dengan 75, tampilkan "Lulus",
selain itu tampilkan "Tidak Lulus".*/
#include <iostream>
using namespace std;

int main()
{
    int nilai;
    cin >> nilai;

    if (nilai < 75) {
        cout << "Tidak Lulus" << endl;
    } else {
        cout << "Lulus" << endl;
    }


    return 0;
}

/*Buatlah program C++ yang membaca sebuah bilangan bulat.
Jika bilangan tersebut genap, tampilkan hasil perkalian bilangan itu dengan 2.
Jika bilangan tersebut ganjil, tampilkan hasil penjumlahan bilangan itu dengan 5.
*/

#include <iostream>
using namespace std;

int main()
{
	// tulis kode di bawah
    int input;

    cin >> input;

    if(input%2 ==0){
        cout << input*2;
    } else {
        cout << input + 5;
    }

	return 0;
}
