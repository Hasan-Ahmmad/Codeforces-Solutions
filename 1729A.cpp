#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int a,b,c; cin>>a>>b>>c;

        if(a==1){

            cout<<1<<endl;
            continue;
        }

        int ans1=a-1;
        int ans2=abs(b-c)+(c-1);
        
        if(ans1>ans2) cout<<2<<endl;
        else if(ans1<ans2) cout<<1<<endl;
        else cout<<3<<endl;
    
    }
    return 0;
}
