#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int m ;
        cin>>m;
        int sum =0;
        while(m){
            int r = m%10;
            sum +=r;
            m = m/10;
        }
        cout<<sum<<endl;
    }
}