#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n;
        cin>>n;

        if(n<=3){
            cout<< -1 <<endl;
            continue;
        }

        vector<int> ans;
        for(int i=1; i<=n; i++){
            ans.push_back(i);
        }

        for(int i=0; i<n-1; i +=2){
            swap(ans[i], ans[i+1]);
        }

        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<< endl;
    
    }
    return 0;
}