#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 5;
    int *ptr = &a;

    cout << ptr <<'\n';
    ptr++;
    cout << ptr << '\n';
    ptr--;
    cout << ptr << '\n';
}

