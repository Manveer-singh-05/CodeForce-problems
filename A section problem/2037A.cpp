#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        vector<int>arr(k);
        for(int i=0;i<k;i++){
            cin>>arr[i];
        }
        unordered_map<int,int>ans;
        for(int x: arr){
            ans[x]++;
        }
        int count = 0;
        for(auto it: ans){
            count+=it.second/2;
        }
        cout<<count<<endl;
    }
}