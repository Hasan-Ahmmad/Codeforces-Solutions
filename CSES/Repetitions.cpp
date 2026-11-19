#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>>s;

    int ans = 1;
    int cnt =1;
    int n = s.size();

    for(int i=0; i<n-1; i++){
        if(s[i] == s[i+1]){
            cnt++;
            ans = max(cnt,ans);
        }
        else{
            cnt = 1;
        }
    }

    cout<< ans<<endl;


    return 0;
}