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
        int a[n];
        for(int i=0;i<n;i++){ 
            cin>>a[i];
        } 
        if(is_sorted(a,a+n)) cout<<n<<endl;
        else cout<<1<<endl;
    } 
    return 0;
}
