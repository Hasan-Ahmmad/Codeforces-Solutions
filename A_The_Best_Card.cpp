#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

bool Prime(int n){

    if(n<2) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n; cin>>n;

        if(Prime(n+1)) cout<< "YES"<<endl;
        else cout<< "NO"<<endl;
    
    }
    return 0;
}