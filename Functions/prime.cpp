#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
    if(n==1){
        return false;
    }

    for(int i=2; i<=n-1; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int isPrime2(int n){
    if(n==1){
        return false;
    }

    for(int i=2; i*i<=n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    cout << isPrime2(23) << '\n';
    cout << isPrime2(20) << '\n';
    cout << isPrime2(3) << '\n';
}