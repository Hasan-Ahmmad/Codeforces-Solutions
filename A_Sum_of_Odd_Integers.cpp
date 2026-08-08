#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        ll n, k; cin>>n>>k;

        if(k*k>n || n%2 != k%2){
            cout<<"NO"<<endl;
        }
        else cout<< "YES"<<endl;
    
    }
    return 0;
}