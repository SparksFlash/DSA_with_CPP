#include<bits/stdc++.h>
using namespace std;
int main(){
    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};

    cout << mat << " = " << &mat[0][0] << '\n';
    cout << mat + 1 << " != " << &mat[0][1] <<'\n';
    cout << mat + 1 << " = " << &mat[1][0] <<'\n';
}