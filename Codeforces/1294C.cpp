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

        set<int> st;
        for(int i=2; i*i<=n; i++){
            if(n%i == 0){
                st.insert(i);
                n/=i;
                break;
            }
        }
        for(int i=2; i*i<=n; i++){
            if(n%i == 0 && !st.count(i)){
                st.insert(i);
                n/=i;
                st.insert(n);
                break;
            }
        }

        if(st.size() != 3){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(auto i : st){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    
    }
    return 0;
}
