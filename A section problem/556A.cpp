#include <bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    while(m--){

        string s;
        cin>>s;
        unordered_map<char, int> mp;
        for(char c: s){
            mp[c]++;
        }
        int min_count = min(mp['0'], mp['1']);
        cout<<abs(mp['0'] - mp['1'])<<endl;
        return 0;
    }
}