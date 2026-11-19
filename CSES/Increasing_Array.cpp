#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    ll ans = 0;
    for(int i=0; i<n-1; i++){
        if(v[i]>v[i+1]){
            ans += v[i]-v[i+1];
            v[i+1] = v[i];
        }
    }

    cout<< ans <<endl;

    return 0;
}