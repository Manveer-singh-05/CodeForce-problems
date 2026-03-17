#include <bits/stdc++.h>
using namespace std;
int main(){
    string a, b,c;
    cin>>a>>b>>c;
    unordered_map<char, int>m;
    for(char d : c){
        m[d]++;
    }
    for(char e : a){
        m[e]--;
    }
    for(char f : b){
        m[f]--;
    }
    if(m.empty()){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}