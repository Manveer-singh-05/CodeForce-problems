#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k ;
    cin>>k;
    while(k--){
        int r = n%10;
        if(r!=0){
            n--;
        }
        else{
            n/=10;
        }
    }
    cout<<n<<endl;
}