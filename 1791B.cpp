#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n; cin>>n;
        string s; cin>>s;

        int p1=0, p2=0;
        bool flag=false;

        for(int i=0; i<n; i++){

            if(s[i]=='U') p1++;
            else if(s[i]=='D') p1--;
            else if(s[i]=='R') p2++;
            else p2--;

            if(p1==1 && p2==1){
                flag=true;
                break;
            }
            
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    
    }
    return 0;
}
