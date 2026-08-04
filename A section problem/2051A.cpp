#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int m;
        cin>>m;
        vector<int>k(m);
        vector<int>l(m);
        for(int i=0;i<m;i++){
            cin>>k[i];
        }
        for(int j=0;j<m;j++){
            cin>>l[j];
        }
        int ans = k[m-1];
        for(int i=0;i<m-1;i++){
            if(k[i]-l[i+1]>0){
                ans+=k[i]- l[i+1];
            }
        }
        cout<<ans<<endl;
    }
}