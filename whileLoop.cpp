#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    int total = 0;
    int i = 1;
    while(i <= n){
        if(i % 2 == 0){
            total += i;
        }
        i++;
    }

    cout << total;
}
