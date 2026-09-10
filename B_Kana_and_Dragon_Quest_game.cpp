#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define cinn for(int i=0; i<n; i++){ cin>>a[i];}
#define coutt for(int i=0; i<n; i++){ cout<<a[i]<<" ";} cout<<endl;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int x, n, m;
        cin>>x>>n>>m;

        int ans = x - (10*m);
        if(ans<=0){
            cout<< "YES"<<endl;
        }
        else{
            while(n-- && x>=20){
                x = (x/2) + 10;
            }
            if(10*m>=x){
                cout<<"YES"<<endl;
            }
            else cout<< "NO"<<endl;
        }
    
    }
    return 0;
}