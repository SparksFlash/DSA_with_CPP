//-->   Formula = *(*(ptr + i) + j)  <--//

#include<bits/stdc++.h>
using namespace std;
 
void func(int mat[][4], int n, int m){
    // cout << "0th row pointer " << mat << '\n';
    // cout << "1st row pointer " << mat+1 << '\n';
    // cout << "2nd row pointer " << mat+2 << '\n';

    // cout << "0th row value " << *mat << '\n';
    // cout << "1st row value " << *(mat+1) << '\n';
    // cout << "2nd row value " << *(mat+2) << '\n';

    cout << *(*(mat + 2) + 2) << '\n';

    // For self test
    cout << *mat + 2<< '\n'; // point to the address mat[0][2]
    cout << (*mat + 2) + 2 << '\n'; //  mat[0][2] + 2 = mat[1][0]
    cout << *((*mat + 2) + 2) << '\n'; // Dereference
}

void func2(int (*mat)[4], int n, int m){

}

int main(){
    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    func(mat, 4, 4);
}