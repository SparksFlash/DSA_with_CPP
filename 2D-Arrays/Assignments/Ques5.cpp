// Rotate array
#include<bits/stdc++.h>
using namespace std;

void rotateMatrix(int mat[][3], int n, int m){
    int rotate[m][n] = {{0}};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            rotate[j][n-i-1] = mat[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << rotate[i][j] << ' '; 
        }
        cout << '\n';
    }
}

int main(){
    int mat[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    rotateMatrix(mat, 3, 3);
}