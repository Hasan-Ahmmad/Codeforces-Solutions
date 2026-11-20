#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t=1;
    while(t--){
    
        ll n;
        cin >> n;

        ll MOD = 1e9 + 7;

        ll ans = 1;
        for(int i=0; i<n; i++){
            ans = (ans*2) % MOD;
        }

        cout << ans << endl;

    }
    return 0;
}