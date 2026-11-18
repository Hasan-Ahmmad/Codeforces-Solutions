#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int a, b, c, d;
        cin>>a>>b>>c>>d;

        bool flag1 = false, flag2 = false;
        for(int i=min(a,b)+1; i<=max(a,b)-1; i++){
            if(i == c){ 
                flag1 = true;
            }
            if(i == d){
                flag2 = true;
            }
        }

        if((flag1 && flag2) || (!flag1 && !flag2)){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    
    }
    return 0;
}