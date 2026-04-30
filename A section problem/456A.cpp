#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i].first>>ans[i].second;
    }
    sort(ans.begin(),ans.end());
    for(int i=1; i<n;i++){
        if(ans[i].second<ans[i-1].second){
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }
    cout<<"Poor Alex";
}