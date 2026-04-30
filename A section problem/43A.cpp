#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
 
    unordered_map<string,int> ans;
 
    while(n--){
        string m;
        cin >> m;
        ans[m]++;
    }
 
    int maxi = INT_MIN;
    for(auto it : ans){
        if(it.second > maxi){
            maxi = it.second;
        }
    }
 
    for(auto it : ans){
        if(it.second == maxi){
            cout << it.first;
            break;
        }
    }
}