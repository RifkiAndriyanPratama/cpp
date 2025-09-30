#include <cctype>
#include <iostream>
using namespace std;

int main(){
    int n;
    int total = 0;
    int i = 1;

    cin >> n;
    while(i <= n){
        if(i % 2 == 1){
            total += i;
        }
        i++;
    }

    cout << total;
}
