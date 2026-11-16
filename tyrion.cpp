#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n;
        cin>>n;

        int cnt = 0;
        for(int i=0; i<n; i++){
            string s;
            cin>>s;

            if(s[0] != s[1]){
                cnt++;
            }
        }

        if(cnt%2 == 0){
            cout<< cnt/2<<endl;
        }
        else cout<< -1 <<endl;
    
    }
    return 0;
}