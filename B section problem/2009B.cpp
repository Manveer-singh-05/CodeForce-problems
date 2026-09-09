#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int m;
        cin>>m;
        vector<string>v(m);
        for(int i=0;i<m;i++){
            cin>>v[i];
        }
        for(int i=m-1;i>=0;i--){
            for(int j=0;j<4;j++){
                if(v[i][j] == '#'){
                    cout<<j+1<<" ";
                }
            }
        }
        cout<<endl;
    }
}