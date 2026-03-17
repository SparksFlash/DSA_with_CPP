// Static Memory allocation uses stack memory
// Dynamic Memory allocation uses heap memory
#include<bits/stdc++.h>
using namespace std;

void func(){
    int size;
    cin >> size;

    int *ptr = new int[size]; // causes memory leak
    int x = 1;
    for(int i=0; i<size; i++){
        ptr[i] = x;
        cout << ptr[i] << " ";
        x++;
    }
    cout << '\n';

    delete [] ptr; //free
}

int main(){
    func();
}