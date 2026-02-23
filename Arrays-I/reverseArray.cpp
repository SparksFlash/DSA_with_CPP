// 2 pointer approach without any extra space
#include<bits/stdc++.h>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << ",";
    }
    cout << '\n';
}

int main(){
    int arr[] = {5,4,6,3,9,2,1};
    int n = sizeof(arr) / sizeof(int);

    int start = 0, end = n -1;

    while(start < end){
        arr[end] = (arr[start] + arr[end]) - (arr[start]=arr[end]);  //swap
        start++;
        end--;
    }
    printArr(arr, n);
}