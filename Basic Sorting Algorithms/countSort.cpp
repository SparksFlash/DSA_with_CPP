#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

void countSort(int arr[], int n){
    int freq[100000];
    int minVal = INT_MAX, maxVAl = INT_MIN;
    for(int i=0; i<n; i++){
        minVal = min(minVal, arr[i]);
        maxVAl = max(maxVAl, arr[i]);
    }
  
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    for(int i=minVal, j=0; i<=maxVAl; i++){
        while(freq[i] > 0){
            arr[j] = i;
            j++;
            freq[i]--;
        }
    }
    print(arr, n);
}

int main(){
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(int);
    countSort(arr, n);
}