#include <bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    while(m--){
        int k;
        cin>>k;
        vector<int> a(k);
        int ans = INT_MAX;
        for(int i=0;i<k;i++) cin>>a[i];
        sort(a.begin(), a.end());
        for(int i=0;i<k-1;i++){
            ans = min(ans, a[i+1]-a[i]);
        }
        cout<<ans<<endl;
    }
}