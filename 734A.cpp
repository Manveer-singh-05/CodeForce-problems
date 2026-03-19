#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int counta=0;
    int countd =0;
    while(n--){
        char c;
        cin>>c;
        if(c=='A'){
            counta++;
        }
        else{
            countd++;
        }
    }
    if(counta>countd){
        cout<<"Anton";
    }
    else if(countd>counta){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
}