#include <bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin >> m;
    while(m--){
        int n;
        cin>>n;
        int count = 0;
        int d = n%10;
        while(n>0){
            count++;
            n/=10;
        }
        cout<<(d-1)*10 + (count * (count+1))/2<<endl;
    }
}