#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int x,y,z; cin>>x>>y>>z;

        int mx = max({x,y,z});
        int mn = min({x,y,z});
        int sum = x+y+z;

        cout<<min(mx,sum-mx) - mn <<endl;
    
    }
    return 0;
}