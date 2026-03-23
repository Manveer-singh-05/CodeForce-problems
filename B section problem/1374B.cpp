#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int b=0 ,c=0;
        while(a%2==0){
            a/=2;
            b++;
        }
        while(a%3==0){
            a/=3;
            c++;
        }
        if(a!=1 || b>c){
            cout<<-1<<endl;
        }
        else{
            cout<<c-b+c<<endl;
        }
    }
}