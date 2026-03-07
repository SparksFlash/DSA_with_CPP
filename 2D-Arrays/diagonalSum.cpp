#include<bits/stdc++.h>
using namespace std;

// //O(n^2)
// int diagonalSum(vector<vector<int>> &mat, int n){
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(i == j)
//                 sum += mat[i][j];
//             else if(j == n-i-1)
//                 sum += mat[i][j];
//         }
//     }
//     cout << sum << '\n';
//     return sum;
// }

//O(n) Optimized
int diagonalSum(vector<vector<int>> &mat, int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += mat[i][i];
        if(i != n-i-1)
           sum += mat[i][n-i-1];
    }
    cout << sum << '\n';
    return sum;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> mat[i][j];

    diagonalSum(mat,n);
}