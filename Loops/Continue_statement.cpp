#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    do{
        cin >> n;
        if(n%10==0){
            cout << "Satisfied and move on\n";
            continue;
        }
        cout << "You entered " << n << '\n';
    }while(true);
}