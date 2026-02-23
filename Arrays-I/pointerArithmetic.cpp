#include<bits/stdc++.h>
using namespace std;

void printArray(int *ptr, int n){
    for(int i=0; i<n; i++){
        cout << *(ptr + i) << '\n';   //Pointer + i
    }
}

int main(){
    int arr[] = {1,5,2,6,7,4};
    int n = sizeof(arr) / sizeof(int);
    printArray(arr, n);
}