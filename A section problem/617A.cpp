#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n ;
    cin>>n;
    if(n==1 || n==2 || n==3 || n == 4 || n ==5){
        cout<<1<<endl;
    }
    else{

        int count = 0;
        int quo = n/5;
        int rem=n%5;
        if(rem==0){
            cout<<quo;
        }
        else{
            cout<<quo+1;
        }
    }
    return 0;
}