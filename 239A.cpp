#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll y, k, n;
    cin>>y>>k>>n;

    ll temp = k;

    bool flag = true;

    while(k<=n){

        if(k>y){
            cout<<k-y<<" ";
            flag = false;
        }
        k+=temp;
    }

    if(flag) cout<<-1<<endl;
    
    return 0;
}
