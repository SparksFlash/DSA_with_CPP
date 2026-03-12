#include<bits/stdc++.h>
using namespace std;

int main(){
    char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << arr <<'\n';

    char arr2[5] = {'c', 'o', 'd', 'e', '\0'};
    cout << arr2 <<'\n';

    char word[30];
    cout << "Type a word : ";
    cin >> word;
    cout << "Your word was : " << word << '\n';
    cout << "Length : " << strlen(word) << '\n';

    cin.ignore();   // buffer clear

    cout << '\n';

    char sentence[30];
    cout << "Type a sentence : ";
    cin.getline(sentence, 30);
    cout << "Your sentence was : " << sentence << '\n';
    cout << "Length : " << strlen(sentence) << '\n';
}