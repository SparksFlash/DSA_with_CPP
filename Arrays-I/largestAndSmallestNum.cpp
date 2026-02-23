#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] ={4,7,1,9,0,22,20};
    int n = sizeof(arr) / sizeof(int);

    int max = arr[0];
    int min = arr[0];
    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout << "Largest number = " << max << '\n';
    cout << "Smallest number = " << min << '\n';
}