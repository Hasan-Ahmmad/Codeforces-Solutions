#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin>>n;

    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }

    ll temp=v[0];
    for(ll i=1; i<n; i++){
        temp=gcd(temp,v[i]);
    }

    ll ans=0;
    for(ll i=1; i*i<=temp; i++){
        if(temp%i ==0 ){
            ans++;
            if(temp/i !=i){
                ans++;
            }
        }    
    }

    cout<<ans<<endl;

    return 0;
}
