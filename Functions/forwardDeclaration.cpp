#include<bits/stdc++.h>
using namespace std;

void sayHello();   // Forward Declaration means this funtions exists somewhere in the code
void assistant();

int main(){
    assistant();
}

void sayHello(){            // Declaration
    cout << "Hello! :)\n";  // Definition
}

void assistant(){
    sayHello();
    cout << "Task implemented.\n";
}