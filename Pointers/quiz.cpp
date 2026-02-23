// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a=5, b=10;
//     int *ptr1 = &a, *ptr2 = &b;
//     ptr2 = ptr1;

//     cout << ptr2 << '\n';
//     cout << ptr1 << '\n';
//     cout << &a << '\n';
// }

#include <iostream>

using namespace std;

int main() {
    int a = 32;
    int *ptr = &a;

    char ch = 'A';
    char &cho = ch;

    cho += a;
    *ptr += ch;

    cout << a << ", " << ch << endl;

    return 0;
}