#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n,k;
        string s;

        cin>>n>>k>>s;

        char c = s[0];
        int cnt = 1;
        for(int i=1; i<n; i++){
            if(c !=s[i]){
                cnt++;
                c=s[i];
            }
        }

        if(cnt<=k){
            cout<<"YES"<<endl;
        }
        else cout<< "NO"<<endl;
    
    }
    return 0;
}