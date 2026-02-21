#include<bits/stdc++.h>
using namespace std;

// int sum(int a, int b=1){            // Declaration
//     int sum = a + b;                // Definition
//     return sum;  
// }

int sum(int a, int b){                 // Declaration
    int sum = a + b;                   // Definition
    return sum;  
}

int diff(int a, int b){            // Declaration
    int sum = a - b;               // Definition
    return sum;  
}

int main(){
    int s = sum(5, 4);  
    // int defaultParameter = sum(5);  //where 1st parameter cannot be the default parameter   
    int d = diff(19, 7);               //5 and 4 are arguments
    cout << "Sum = " << s << '\n';
    cout << "Difference = " << d << '\n';
}