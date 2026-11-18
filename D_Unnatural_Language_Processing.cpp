#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n; cin>> n;
        string s; cin>>s;

        string ans = "";
        while(!s.empty()){

            int cnt;
            if(s.back() == 'e' || s.back() == 'a'){
                cnt = 2;
            }
            else cnt = 3;

            while(cnt--){
                ans += s.back();
                s.pop_back();
            }
            ans += '.';
        }

        ans.pop_back();

        reverse(ans.begin(), ans.end());

        cout<< ans <<endl;

    
    }
    return 0;
}