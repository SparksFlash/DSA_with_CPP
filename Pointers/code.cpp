#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;   // In Pointer variable you must store an address

    float pi = 3.1416;
    float *ptr2 = &pi;
    cout << *ptr << '\n';
    cout << &a << " = " << ptr << '\n';
    cout << &pi << " = " << ptr2 << '\n';

    cout << '\n';

    int b = 13;
    int *ptr3 = &b;

    int **pptr = &ptr3;    // pointer to pointer variable
    cout << &ptr3 << " = " << pptr << '\n';

    // cout << sizeof(ptr) << '\n';
    // cout << sizeof(ptr2) << '\n';
}