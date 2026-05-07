#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>ans(n+1,0);
        int a;
        cin>>a;
       
        for(int i=0;i<a;i++){
            int x;
            cin>>x;
            ans[x]=1;
        }
        int b;
        cin>>b;
        vector<int> v1(b);
        for(int i=0;i<b;i++){
            int x;
            cin>>x;
            ans[x]=1;
        }
        for(int i=1;i<=n;i++){
            if(ans[i]==0){
                cout<<"Oh, my keyboard!"<<endl;
                return 0;
            }
        }
        cout<<"I become the guy."<<endl;



}