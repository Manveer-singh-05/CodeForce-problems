#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int count = 0;
        int a,b,c;
        cin>>a>>b>>c;
        while(a<=c && b<=c){
            if(a>b){
                b+=a;
            }
            else{
                a+=b;
            }
            count++;
        }
        cout<<count<<endl;

    }
}