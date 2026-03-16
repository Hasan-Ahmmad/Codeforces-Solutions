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
        for(int i=0; i<n; i++){
            st.insert(s[i]);
        }

        cout<<(st.size()*2)+(n-st.size())<<endl;
    }
    
    return 0;
}
