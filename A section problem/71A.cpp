#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string a;
        cin>>a;
        int length = 0;
        if(a.length()>10){
            length = a.length()-2;
            cout<<a[0]<<length<<a[a.length()-1]<<endl;
        }
        else{
            cout<<a<<endl;
        }
        
    }
}