#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int upc= 0;
    int lowc= 0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z') upc++;
        else lowc++;
    }
    if(upc>lowc){
        for(int i=0;i<s.size();i++){
            s[i]=toupper(s[i]);
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
    }
    cout<<s;
}