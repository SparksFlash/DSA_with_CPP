#include<bits/stdc++.h>
using namespace std;

void reverse(char word[], int n){
    int start = 0, end = n-1;
    while(start < end){
        swap(word[start], word[end]);
        start++;end--;
    }
}

int main(){
    char word[] = "code done";
    reverse(word,strlen(word));
    cout << "reversed = " << word << '\n';
 }