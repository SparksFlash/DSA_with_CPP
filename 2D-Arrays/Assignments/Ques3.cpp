// Question 3 : Write a program to Find Transpose of a Matrix.
// What is Transpose?
// Transpose of a matrix is the process of swapping the rows to columns. For a 2x3
// matrix,
// Matrix
// a11 a12 a13
// a21 a22 a23

// Transposed Matrix
// a11 a21
// a12 a22
// a13 a23



#include<bits/stdc++.h>
using namespace std;

void transposeMatrix(int mat[][3], int n, int m){
    int transpose[m][n] = {{0}};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            transpose[j][i] = mat[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << transpose[i][j] << ' '; 
        }
        cout << '\n';
    }
}

int main(){
    int mat[2][3] = {{1, 2, 3},
                     {4, 5, 6}};

    transposeMatrix(mat, 2, 3);
}