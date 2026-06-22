#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        int arr[k];
       int posi = 0;
       int negi = 0;

        for(int i=0;i<k;i++){
            cin>>arr[i];
            if(arr[i]>0){
                posi++;
            }
            else if(arr[i]<0){
                negi++;
            }
        }    
        int ans = 0;
        while(posi<negi){
            ans++;
            posi++;
            negi--;
        }
        if(negi%2==1){
            ans++;
        }
        cout<<ans<<endl;
     


        
    }
}