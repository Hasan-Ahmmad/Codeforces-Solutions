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
        string s; cin>>s;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='R') ans++;
            else break;
        }
        cout<<ans+1<<endl;
    }
    
    return 0;
}
