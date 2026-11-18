#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n; cin>>n;

        string s=to_string(n);

        int len=s.size();
        int dgt=s[0]-'0';

        cout<<(len-1)*9 + dgt <<endl;
    
    }
    return 0;
}
