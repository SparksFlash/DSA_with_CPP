#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    int digSum = 0;
    while(n > 0){
        int last_digit = n % 10;
        digSum += last_digit;
        n /= 10;
    }
    cout << digSum;
}