#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count =0;
    char pointer = 'a';
    for(int i=0;i<s.size();i++){
        int a = abs(s[i]-pointer);
        int b = 26 - a;
        count+=min(a,b);
        pointer = s[i];
    }    cout<<count;
    
}