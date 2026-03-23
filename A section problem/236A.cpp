#include <bits/stdc++.h>
using namespace std;
int main(){
    string m;
    getline(cin,m);
    unordered_set<char>unique_chars;
    for(char c : m){
        if(c != ' '){
            unique_chars.insert(c);
        }
    }
    if(unique_chars.size() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}