#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "My class";
    string str1 = "I love c++ & python";
    // getline(cin, str);
    cout << str << '\n';

    for(int i=0; i<str.length(); i++){ // str.length() <- dot operator
        cout << str[i] << " ";
    }
    cout << '\n';

    for(char ch : str){
        cout << ch << ' ';
    }
    cout << '\n';

    cout << str.at(3) << '\n';
    cout << str.substr(1, 3) << '\n';
    cout << str1.find("python") << '\n';

}