#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    map<string, int> mp;

    int t; cin>>t;
    while(t--){
    
        string s;
        cin>>s;
        mp[s]++;
    
    }

    string ans;
    int Max = 0;
    for(auto i : mp){
        if(i.second>Max){
            Max = i.second;
            ans = i.first;
        }
    }
  
    cout<< ans <<endl;
    
    return 0;
}
