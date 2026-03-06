#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] <<' ';
    }
    cout << '\n';
}

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int curr = arr[i], prev = i - 1;
        while(prev >= 0 && arr[prev] > arr[prev + 1]){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev + 1] = curr;
    }
    print(arr, n);
}

int main(){
    int arr[] = {5, 44, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);
    insertionSort(arr, n);
}