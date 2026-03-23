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
    for(auto it :m){
        if(it.second!=0){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
}