#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        ll n;
        cin>>n;

        ll ans = 0;
        while(n != 1){

            ans += (n*2 + (n-2)*2) * (n/2);

            n-=2;
        }

        cout<< ans <<endl;
    
    }
    return 0;
}