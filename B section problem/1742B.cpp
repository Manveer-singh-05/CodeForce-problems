#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int arr[a];
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
        unordered_map<int,int> m;
        for(int i=0;i<a;i++){
            m[arr[i]]++;
        }
        for(auto it: m){
            if(it.second>1){
                cout<<"NO"<<endl;
                break;
            }
        }
        if(m.size()==a){
            cout<<"YES"<<endl;
        }
    }
}