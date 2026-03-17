// When the program ends, the pointer x is destroyed, but the heap memory it was pointing to remains allocated but cannot be accessed by anyone or anything.
// So, Deallocation needs here for avoid memory leak
#include <iostream>
using namespace std;

int* func() {
    int *ptr = new int;
    *ptr = 1200;
    cout << "ptr points to " << *ptr << endl;

    return ptr;
}

int main() {
    int *x = func();
    cout << *x << endl;

    // delete x;   // memory leak fixed by this deallocation
    return 0;
}