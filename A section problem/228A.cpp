#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    unordered_map<int,int> m;
    m[a]++;
    m[b]++;
    m[c]++;
    m[d]++;
    int ans=0;
    for(auto i : m){
        if(i.second==2){
            ans+=1;
        }
        else if(i.second==3){
            ans+=2;
        }
        else if(i.second==4){
            ans+=3;
        }
    }
    cout<<ans<<endl;
}