#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m; cin>>n>>m;
    int a[m];
    for(int i=0; i<m; i++) cin>>a[i];

    sort(a,a+m);
    int ans=INT_MAX;

    for(int i=0; i<(m-n)+1; i++){
        
        if(a[i+(n-1)]-a[i]<ans){
            ans=a[i+(n-1)]-a[i];
        }
    }

    cout<<ans<<endl;
    
    return 0;
}
