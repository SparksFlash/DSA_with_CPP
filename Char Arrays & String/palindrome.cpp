#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(char str[], int n){
    int start = 0, end = n - 1;
    while(start < end){
        if(str[start++] != str[end--]){
            cout << "Not a valid Palindrome" << '\n';
            return false;
        }
        // start++;
        // end--;
    }
    cout << "Valid Palindrome" << '\n';
    return true;
}

int main(){
    char word[] = "racecar";
    isPalindrome(word, strlen(word));
}