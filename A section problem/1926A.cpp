#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        for(char x:s){
            mp[x]++;
        }
        int maxi = INT_MIN;
        char ans;
        for(auto i : mp){
            if(i.second > maxi){
                maxi = i.second;
                ans = i.first;
            }
            
        }
        cout<<ans<<endl;
    }
}