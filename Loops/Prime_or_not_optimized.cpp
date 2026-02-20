#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>> n;
    bool isPrime = true;
    for(int i = 2; i <= sqrt(n); i++){  //sqrt(n)
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime)
       cout << "Number is Prime\n";
    else
       cout << "Not a prime\n";
}