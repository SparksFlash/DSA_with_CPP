// 6
// A 
// B C 
// D E F 
// G H I J 
// K L M N O 
// P Q R S T U 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int outer; cin >> outer;
    char ch = 'A';
    for(int i=1; i<=outer; i++){
        for(int j=1; j<=i; j++){
            cout << ch++ << ' '; // post increment
            // ch++;
        }
        cout << '\n';
    }
}