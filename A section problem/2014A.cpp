#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int m , k;
        cin>>m>>k;
        int arr[m];
        int ans = 0;
        int havegold = 0;
        for(int i=0;i<m;i++){
            cin>>arr[i];
            if(arr[i]>=k){
                havegold+=arr[i];
            }
            else if(arr[i]==0){
                if(havegold> 0){
                    havegold--;
                    ans++;
                }
            }
        }
       cout<<ans<<endl;
    }
}