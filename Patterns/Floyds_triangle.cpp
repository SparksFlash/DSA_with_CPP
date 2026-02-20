#include<bits/stdc++.h>
using namespace std;
int main(){
    int outer; cin >> outer;
    int num = 1;
    for(int i=1; i<=outer; i++){
        for(int j=1; j<=i; j++){
            cout << num++ << ' ';
        }
        cout << '\n';
    }
}