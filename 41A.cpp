#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,d;
    cin>>s>>d;
    reverse(d.begin(),d.end());
    if(s==d) cout<<"YES";
    else cout<<"NO";
}