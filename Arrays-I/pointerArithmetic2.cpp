// ptr 1 + ptr2    ---> invalid operation
// ptr 1 - ptr2    ---> Both should be same type

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[20] = {1,2,3,4,5,6};
    int a = 5;
    // int *ptr1 = &a;
    int *ptr1 = arr;
    int *ptr2 = ptr1 + 3; // 4


    cout << *ptr2 << '\n'; // 4
    cout << *ptr1 << '\n'; // 1

    cout << ptr2 - ptr1 << " integers can be stored space between ptr1 and ptr2." << '\n';   // 3 integer
}