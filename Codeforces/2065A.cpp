#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        string W; cin>>W;
        W.pop_back();
        W.pop_back();
        W.push_back('i');
        
        cout<<W<<endl;
    
    }
    return 0;
}
