#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        string s;
        cin>>s;
        map<char,int>mp;
        bool check  = true;
        for(int i=0;i<k;i++){
          if(mp[s[i]]>0){
              
            if(s[i]!=s[i-1]){
                check = false;
                break;
            }
        }
              mp[s[i]]++;

        
        
    }
        if(check){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
}
}