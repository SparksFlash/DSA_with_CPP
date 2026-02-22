#include<bits/stdc++.h>
using namespace std;

void binToDec(int binNum){
    int n = binNum;
    int decNum = 0;
    int pow = 1;
    while(n > 0){
        int lastDig = n % 10;
        decNum += lastDig * pow;
        pow *= 2;
        n /= 10;
    }
    cout << decNum << '\n';
}

int main(){
    binToDec(1011);
}