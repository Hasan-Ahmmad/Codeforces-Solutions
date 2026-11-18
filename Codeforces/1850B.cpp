#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n; cin>>n;
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++){
            cin>>a[i]>>b[i];
        }
        int mx=INT_MIN;
        int ans=0;
        for(int i=0; i<n; i++){ 
            
            if(a[i]<=10){
                if(b[i]>mx){
                    mx=b[i];
                    ans=i;
                }
            }
       }

       cout<<ans+1<<endl;
    }
    return 0;
}
