#include <bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    vector<int>ans;
    while(m--){
        int n;
        cin>>n;
        ans.push_back(n);
    }
   
    int mini = *min_element(ans.begin(),ans.end(), [](int a, int b){
        return abs(a)<abs(b);
    });
    cout<<abs(mini)<<endl;
}