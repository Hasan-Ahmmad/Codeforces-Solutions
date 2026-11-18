#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        string s; cin>>s;
        set<char> st;
        for(char i : s){
            st.insert(i);
        }

        if(st.size()==1) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            string cpy=s;
            sort(cpy.begin(),cpy.end());
            if(s != cpy) cout<<cpy<<endl;
            else{
                reverse(cpy.begin(),cpy.end());
                cout<<cpy<<endl;
            }
        }
    
    }
    return 0;
}
