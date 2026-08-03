#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        string s; cin>>s;

        int ans = 0, cnt = 0;
        bool flag = false;

        for(int i=0; i<s.size(); i++){

            if(s[i] == '('){
                cnt++;
            }
            if(s[i] == ')'){
                cnt--;
            }

            if(cnt == 0){
                ans++;
            }

            if(ans>=2){
                flag = true;
                break;
            }
        }

        if(flag) cout<< "YES" <<endl;
        else cout<< "NO" <<endl;
    
    }
    return 0;
}