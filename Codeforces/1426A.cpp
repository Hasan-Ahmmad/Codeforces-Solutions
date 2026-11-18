#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n, x; cin>>n>>x;
        int pre[1000];
        pre[0]=3;
        for(int i=1; i<1000; i++){
            pre[i]=pre[i-1]+x;
        }

        int ans=1;
        for(int i=0; i<1000; i++){
            if(pre[i]<=n){
                ans=i+2;
            }
            else{
                break;
            }
        }

        cout<<ans<<endl;
    
    }
    return 0;
}
