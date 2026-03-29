#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        bool flag=true;
        for(int i=0; i<n-1; i++){
            if(abs(a[i]-a[i+1]) ==5 || abs(a[i]-a[i+1]) == 7){
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    
    }
    return 0;
}
