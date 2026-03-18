//Vector behaves like a little bit of dynamic array
//Vector can resize dynamically at runtime

#include<bits/stdc++.h>
using namespace std;
int main(){ 
    vector<int> vec1(10, -1);
    cout << vec1.size() << '\n';

    for(int i=0; i<vec1.size(); i++){
        cout << vec1[i] << ' ';
    }
    cout << '\n';
}