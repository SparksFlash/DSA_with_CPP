#include<bits/stdc++.h>
using namespace std;

int linearSearch(int *arr, int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] ={4,7,1,9,0,22,20};
    int n = sizeof(arr) / sizeof(int);

    cout << linearSearch(arr, n, 20) << '\n';
}