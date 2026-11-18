#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int a,b,c; cin>>a>>b>>c;

        int ans=0;
        int mn=min(a,b);
        int mx=max(a,b);

        if(mn==mx){
            cout<<0<<endl;
            continue;
        }
        
        while(true){
            mn+=c;
            mx-=c;
            ans++;
            if(mn>=mx){
                break;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
