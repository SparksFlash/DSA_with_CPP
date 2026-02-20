#include <bits/stdc++.h>
using namespace std;
int main(){
    int outer;
    cin >> outer;
    for (int i = 1; i <= outer; i++){
        //spaces
        for (int j = 1; j <= outer - i; j++){
            cout << "  ";
        }
        //stars
        for (int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << '\n';
    }
}