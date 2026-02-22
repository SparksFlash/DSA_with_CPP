#include<bits/stdc++.h>
using namespace std;

int formula(int a, int b){
    return (a*a)+(2*a*b)+(b*b);
}

int main(){
    int num1, num2; cout << "Enter first number: ";cin >> num1;  cout << "Enter second number: "; cin >> num2;
    cout << formula(num1, num2) << "\n";
}