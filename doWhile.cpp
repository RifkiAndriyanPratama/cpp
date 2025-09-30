#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,  i = 1, sum = 0;

    do {
        sum += pow(i);
    }while (i <= n);

    cout << sum;
}

