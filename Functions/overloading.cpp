#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b){               // Declaration
    cout << a+b <<'\n'; 
    return a+b; 
}

double sum(double a, double b){     // Declaration
    cout << a+b <<'\n';                
    return a+b;  
}

int diff(int a, int b){            // Declaration
    cout << a - b << '\n';               // Definition
    return a - b;  
}

int main(){
    sum(5.9, 4.2);   
    diff(19, 7);              
    // cout << "Sum = " << s << '\n';
    // cout << "Difference = " << d << '\n';
}