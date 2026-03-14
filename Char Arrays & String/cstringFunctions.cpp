#include<bits/stdc++.h>
using namespace std;
int main(){
    char str1[100];
    char str2[100] = "My classs";
    //str1 = "Hello World!";
    strcpy(str1, str2);
    cout << str1 << '\n';

    //String concatenate
    char str3[100] = "Hello";
    char str4[100] = " World!";
    strcat(str3, str4);
    cout << str3 << '\n';

    //String Compare(-ve, 0, +ve)
    cout << strcmp(str3, str4) << '\n';
}