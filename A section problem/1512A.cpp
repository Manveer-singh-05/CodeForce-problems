#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        int arr[k];
        for(int i=0;i<k;i++){
            cin>>arr[i];
        }
        int spy = 0;
        unordered_map<int,int> m;
        for(int i=0;i<k;i++){
            m[arr[i]]++;
        }
        for(int i=0;i<k;i++){
            if(m[arr[i]]==1){
                spy = i+1;
                break;
            }
        }
        cout<<spy<<endl;
    }
}