// Question 1 : Print the number of all 7’s that are in the 2d array.
// Example :
// Input - int arr[ ][ ] = { {4,7,8}, {8,8,7} }; n = 2, m = 3
// Output - 2

#include<bits/stdc++.h>
using namespace std;

void countOf7(int mat[][3], int n, int m){
    int key = 7, count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j] == key){
                count++;
            }
        }
    }
    cout << count  << '\n';
}

 int main(){
    int mat[2][3] = {{4, 7, 8},
                     {8, 8, 7}};

    countOf7(mat, 2, 3);
 }