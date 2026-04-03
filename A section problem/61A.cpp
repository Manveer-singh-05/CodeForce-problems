#include <bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   string b;
   cin>>b;
   string ans = "";
   for(int i=0;i<s.size();i++){
        if(s[i]==b[i]){
            ans+='0';
        }
        else{
            ans+='1';
        }
    }
    cout<<ans<<endl;

}