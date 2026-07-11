#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int m;
        cin>>m;
       int maxi = 0;
       int index= -1;
        for(int i=0;i<m;i++){
            int a, b;
            cin>>a>>b;
            if(a<=10 && b>maxi){
                maxi = b;
                index  = i;
            }
        }
        cout<<index+1<<endl;
        
       
    }
    
}