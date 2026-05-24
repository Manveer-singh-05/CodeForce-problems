#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mis = 0;
    int chr = 0;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a>b){
            mis++;
        }
        else if(a<b){
            chr++;
        }
    }
    if(mis>chr){
        cout<<"Mishka"<<endl;
    }
    else if(mis<chr){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }
}