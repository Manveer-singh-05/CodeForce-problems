#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        long long x,y;
        cin>>x>>y;
        long long a , b;
        cin>>a>>b;
        long long ans  =0;
        if(2*a<=b){
            ans = x*a + y*a;
        }
        else{
            long long mn = min(x,y);
            ans = mn*b + (x-mn)*a + (y-mn)*a;
        }
        cout<<ans<<endl;
    }
}