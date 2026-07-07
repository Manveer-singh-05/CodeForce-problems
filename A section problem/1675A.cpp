#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a, b,c,d ,e;
        cin>>a>>b>>c>>d>>e;
        if(a>=d && b >=e){
            cout<<"YES"<<endl;
            continue;
        }

        int k  = a -d;
        int l =  b-e;
        int total = 0;
        if(k<0){
            total+= k;
        }
        if(l<0){
            total+=l;
        }
        if((c+=total)>=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}