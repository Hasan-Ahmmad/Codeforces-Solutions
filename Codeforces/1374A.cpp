#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){

        long long x,y,n; cin>>x>>y>>n;
        cout<<n-(n-y)%x<<endl;
    }
    
    return 0;
}
