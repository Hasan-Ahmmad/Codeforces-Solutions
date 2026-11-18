#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int n;
    cin>> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>> v[i];
    }

    vector<ll> pre1(n+1);
    pre1[1] = v[0];

    for(int i=2; i<n+1; i++){

        pre1[i] = pre1[i-1] + v[i-1];
    }

    sort(v.begin(), v.end());

    vector<ll> pre2(n+1);
    pre2[1] = v[0];

    for(int i=2; i<n+1; i++){

        pre2[i] = pre2[i-1] + v[i-1];
    }

    int t; cin>>t;
    while(t--){
        
        int type, a, b;
        cin>> type >> a >> b;

        if(type == 1){
            cout<< pre1[b] - pre1[a-1] <<endl;
        }
        else cout<< pre2[b] - pre2[a-1] <<endl;
    }

    return 0;
}