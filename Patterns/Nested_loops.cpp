#include<bits/stdc++.h>
using namespace std;
int main(){
    int outer, inner; cin >> outer >> inner;
    for(int i=1; i<=outer; i++){
        int val = i;
        for(int j=1; j<=inner; j++){
            cout << val << ' ';
        }
        cout << '\n';
    }
}