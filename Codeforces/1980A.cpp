#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n,m; cin>>n>>m;

        string a; cin>>a;

        vector<int> vec(7,0);

        for(int i=0; i<n; i++){
            vec[a[i]-65]++;
        }

        int ans=0;

        for(int i=0; i<7; i++){

            if(vec[i]<=m){
                ans+=m-vec[i];
            }
        }

        cout<<ans<<endl;

    }
    return 0;
}
