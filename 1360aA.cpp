#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--)
    {
        int a,b; cin>>a>>b;
        int x=min(a,b);
        int y=max(a,b);
        int z=max(2*x,y);
        cout<<z*z<<endl;
    }
    return 0;
}
