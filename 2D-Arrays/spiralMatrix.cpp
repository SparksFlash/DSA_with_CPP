#include <bits/stdc++.h>
using namespace std;

void spiralMatrix(vector<vector<int>> &arr, int n, int m)
{
    int srow = 0, scol = 0;
    int erow = n - 1, ecol = m - 1;

        while(srow <= erow && scol <= ecol){
            for(int j=scol; j<=ecol; j++){
                cout << arr[srow][j] << " ";
            }

            for(int i=srow+1; i<=erow; i++){
                cout << arr[i][ecol] << " ";
            }

            for(int j=ecol-1; j>=scol; j--){
                if(srow == erow)
                   break;
                cout << arr[erow][j] << " ";
            }

            for(int i=erow-1; i>=srow+1; i--){
                if(scol == ecol)
                   break;
                cout << arr[i][scol] << " ";
            }
            srow++, scol++;
            erow--, ecol--;
        }

    cout << endl;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];

    spiralMatrix(arr, n, m);
}