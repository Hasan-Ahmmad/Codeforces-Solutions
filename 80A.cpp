#include<bits/stdc++.h>
using namespace std;
 
#define FASTIO ios::sync_with_stdio(false); cin.tie(nullptr);

bool Prime(int n)
{
    if(n<2) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    FASTIO;
    
    int n,m; cin>>n>>m;
    bool flag=true;
    if(!(Prime(m)))
    {
        flag=false;
    }
    for(int i=n+1;i<=m;i++)
    {
        if(Prime(i))
        {
            if(i!=m)
            {
                flag=false;
                break;
            }
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
