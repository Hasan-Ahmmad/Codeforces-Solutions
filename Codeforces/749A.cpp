#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    int ans=n/2;
    cout<<ans<<endl;
    if(n%2!=0)
    {
        for(int i=0;i<ans-1;i++)
        {
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
    else
    {
        for(int i=0;i<ans;i++)
        {
            cout<<2<<" ";
        }
        cout<<endl;
    } 
    return 0;
}
