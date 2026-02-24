#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach O(n^3)
void maxSubarraySum1(int *arr, int n){
    int maxSum = INT_MIN;
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int currSum = 0;
            for(int i=start; i<=end; i++){
                currSum += arr[i];
            }
            // cout << currSum << ",";
            maxSum = max(maxSum, currSum);
        }
    }
    cout << maxSum << '\n';
}

// O(n^2)
void maxSubarraySum2(int *arr, int n){
    int maxSum = INT_MIN;
    for(int start=0; start<n; start++){
        int currSum = 0;
        for(int end=start; end<n; end++){
            currSum += arr[end];
            maxSum = max(maxSum, currSum);
        }
    }
    cout << maxSum << '\n';
}

// Kadane's Algo
void maxSubarraySum3(int *arr, int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0)
            currSum = 0;
    }
    cout << maxSum << '\n';
}



int main(){
    int arr[6] = {2, -3, 6, -5, 4, 2};
    // int arr[4] = {-1, -2, -3, -4};
    int n = sizeof(arr) / sizeof(int);
    maxSubarraySum3(arr, n);
}