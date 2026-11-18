#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m,k; 
    cin>>n>>m>>k;
    if(min(m,k)>=n) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}
