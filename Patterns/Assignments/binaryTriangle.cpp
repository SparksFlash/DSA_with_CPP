// 5
// 1 
// 0 1 
// 0 1 0 
// 1 0 1 0 
// 1 0 1 0 1      

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    bool val = true;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << val << ' ';
            val = !val;
        }
        cout << '\n';
    }
}


// If we want to implement this
// --> ( (i + j) % 2 )
// 5
// 0 
// 1 0 
// 0 1 0 
// 1 0 1 0 
// 0 1 0 1 0 