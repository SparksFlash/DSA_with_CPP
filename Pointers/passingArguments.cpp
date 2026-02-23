#include<bits/stdc++.h>
using namespace std;

//pass by value
void changeB(int b){
    b = 20;
    cout << b << '\n';
}

void swap(int a, int b){
    b = (a + b) - (a = b);
    cout << "a = " << a << ", " << "b = " << b <<'\n';
} 

// pass by reference by pointers
void changeA(int *ptr){
    *ptr = 20;
    cout << *ptr << '\n';
}

// pass by reference by reference variabele
void changeC(int &c){
    c = 25;
    cout << c << '\n';
}

int main(){
    int b = 10;
    cout << "When function is called then value = ";
    changeB(b);
    cout << "After function call value = " << b << '\n';
    cout << '\n';
    // swap(5, 3);

    int a = 10;
    cout << "In pass by reference, When function is called then value = ";
    changeA(&a);
    cout << "After function call value = " << a << '\n';
    cout << '\n';


    int c = 35;
    changeC(c);
    cout << c << '\n';


}