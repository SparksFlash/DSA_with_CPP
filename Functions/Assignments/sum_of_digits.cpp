#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
    int res = 0;
    while(n > 0){
        int lastDig = n % 10;
        res = res + lastDig;
        n /= 10;
    }
    return res;
}

int main(){
    int num; cout << "Enter a number: ";cin >> num;
    cout << sumOfDigits(num) << "\n";
}