#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<26){ 
        cout<<"NO"<<endl;
         return 0;
    }
    int arr[26]={0};
    while(n--){
        char c;
        cin>>c;
        c = tolower(c);
        arr[c-'a']++;

    }
    for(int i=0;i<26;i++){
        if(arr[i]==0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}