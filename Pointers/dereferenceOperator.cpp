#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 60;
    int *ptr = &a;
    cout << *ptr << '\n';

    //accesssing of variable using pointer
    *ptr = 70;
    cout << a << '\n';
}