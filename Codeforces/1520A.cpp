#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){

        int n; cin>>n;
        string s; cin>>s;

        set<char> st;
        st.insert(s[0]);
        bool flag=false;
        
        for(int i=1; i<n; i++){
            if(s[i] != s[i-1]){
                if(st.count(s[i])){
                    flag=true;
                    break;
                }
                st.insert(s[i]);
            }
        }

        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
    return 0;
}
