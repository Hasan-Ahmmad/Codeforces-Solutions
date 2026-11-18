#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        ll a,b;
        cin>>a>>b;

        if(a==1){
            cout<<b*b<<endl;
        }
        else if(b%a == 0){
            cout<<b*b/a<<endl;
        }
        else{
            ll ans= a*b/gcd(a,b);
            cout<<ans<<endl;
        }

    
    }
    return 0;
}
