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
        string x; cin>>x;
        int ans=x.size() * (x.size()+1) /2;
        if(x[0]=='1')
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<(x[0]-'1')*10 + ans<<endl;
        }
    }
    return 0;
}
