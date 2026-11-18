#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n; cin>>n;
        int s[n];

        for(int i=0; i<n; i++) cin>>s[i];

        int ans=INT_MAX;
        
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int val=abs(s[i]-s[j]);
                ans=min(ans,val);
            }
        }

        cout<<ans<<endl;
    
    }
    return 0;
}
