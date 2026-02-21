#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact = 1;            // Local scope
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    cout << "Factorial(" << n <<") = " << fact << '\n';
    return fact;// 0->1, 1->1, 2->2
}

int main(){
    factorial(0);
    factorial(1);
    factorial(2);
    factorial(3);
    factorial(4);
    factorial(5);
    factorial(6);
    factorial(7);
}