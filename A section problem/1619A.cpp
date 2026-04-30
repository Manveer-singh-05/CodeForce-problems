#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int si = s.size();
        if(si%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            string first = s.substr(0,si/2);
            string second = s.substr(si/2);
            if(first==second){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}