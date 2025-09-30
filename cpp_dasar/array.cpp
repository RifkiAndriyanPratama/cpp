#include <iostream>
#include <array>
using namespace std;

int main(){
  int angka[5] = {1, 2, 3, 4, 5};
  int length = size(angka);

  // cout << angka[3] << endl;

  for(int i = 0; i < length; i++){
    cout << angka[i] << endl;
  }
}