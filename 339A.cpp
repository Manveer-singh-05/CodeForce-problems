#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    map<char,int>m;
    string ans="";
    for(int i=0;i<s.size();i++){
        if(s[i]=='+') continue;
        m[s[i]]++;
    }
    for(auto i:m){
        while(i.second--){
            ans+=i.first;
            ans+='+';
        }
    }
    if(!ans.empty()) ans.pop_back();
    cout << ans << endl;
}