#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m,a,b; cin>>n>>m>>a>>b;
    if(m*a<=b){ 
        cout<<n*a<<endl;
    }
    else cout<<(n/m)*b + min((n%m)*a,b)<<endl;
    return 0;
}
