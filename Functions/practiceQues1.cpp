#include<bits/stdc++.h>
using namespace std;

int product(int a, int b){
    return a * b;
}

bool isEven(int n){
    if(n % 2 == 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    cout << product(10, 20) << endl;
    cout << isEven(179) << endl;
}