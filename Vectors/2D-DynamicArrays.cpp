#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows, cols;
    cout << "Enter number of rows and cols : " << '\n';
    cin >> rows >> cols;

    int* *matrix = new int*[rows];
    for(int i=0; i<rows; i++){
        matrix[i] = new int[cols];
    }

    // Data Store
    int x = 1;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            matrix[i][j] = x++;
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }

    cout << matrix[2][2] << '\n';
    cout << *(*(matrix + 2) + 2) << '\n';
}