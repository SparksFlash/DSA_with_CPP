// Count how many times lowercase vowels occurred in a String entered by the user.
#include<bits/stdc++.h>
using namespace std;

int countSmallestVowel(char word[], int n){
    int cnt = 0;
    for(int i=0; word[i] != '\0'; i++){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ){
            cnt++;
        }
    }
    cout << "Total smallest number of vowels : " <<  cnt << '\n';
    return cnt;
}

int main(){
    char word[] = "code done";
    countSmallestVowel(word, strlen(word));
}