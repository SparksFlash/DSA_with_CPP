#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    int num = n;
    int cubeSum = 0;
    int digitCount = floor(log10(n)) + 1;
    while(num > 0){
        int lastDig = num % 10;
        cubeSum = cubeSum + pow(lastDig, digitCount);
        num = num / 10;
    }

    if(n ==  cubeSum)
        cout << "Armstrong Number\n";
    else
        cout << "Not Armstrong\n"; 
}