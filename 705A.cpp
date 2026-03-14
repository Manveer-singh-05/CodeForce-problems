#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s  = "";
    int fort = n-1;
    string a = "I hate ";
    string b = "I love ";
    for(int i=0;i<n;i++){
        if(i%2==0){
            s += a;
        }
        else{
            s += b;
        }
        if(i!=fort){
            s += "that ";
        }
    }
    s+= "it";
    cout<<s<<endl;
}