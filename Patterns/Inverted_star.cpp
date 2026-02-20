#include<bits/stdc++.h>
using namespace std;
int main(){
    int outer;cin >> outer;
    for (int i=1; i<=outer; i++){
        for(int j=1; j<=outer-i+1; j++){
            cout << "* ";
        }
        cout << '\n'; 
    }
}