#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int count =0;
    while(n<=m){
        n*=3;
        m*=2;
        count++;
    }
    cout<<count;
}