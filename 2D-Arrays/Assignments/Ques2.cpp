// Question 2 : Print out the sum of the numbers in the second row of the “nums” array.
// Example :
// Input - int nums[ ][ ] = { {1,4,9}, {11,4,3}, {2,2,3} };
// Output - 18


#include<bits/stdc++.h>
using namespace std;

int sumOfRow(int mat[][3], int n, int m){
    int sum = 0;
    for(int j=0; j<n; j++){
        sum += mat[1][j];
    }
    cout << sum <<'\n';
    return 0;
}

 int main(){
    int mat[3][3] = {{1, 4, 9},
                     {11, 4, 3},
                     {2, 2, 3}};
                     
    sumOfRow(mat, 3, 3);
 }