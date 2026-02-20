#include<bits/stdc++.h>
using namespace std;
int main(){
    int outer; cin >> outer;
    for(int i=1; i<=outer; i++){
        cout << "* ";
        for(int j=1; j<=outer - 1; j++){
            if(i == 1 || i == outer)
               cout << "* ";
            else
               cout << "  ";
        }
        cout << "* " <<'\n';
    }
}