#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n; cin>>n;
        string s; cin>>s;

        int ans = 0;
        for(int i=0; i<n; ){

            if(i<n-4 && s.substr(i,5) == "mapie"){
                ans++;
                i += 5;
            }
            else if(i<n-2 && (s.substr(i,3) == "map" || s.substr(i,3) == "pie")){
                ans++;
                i += 3;
            }
            else i++;
        }

        cout<< ans <<endl;
    
    }
    return 0;
}