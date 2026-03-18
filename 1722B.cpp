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

        string s, s1; cin>>s>>s1;
        for(int i=0; i<n; i++){
            if(s[i]=='G' || s[i]=='B'){
                s[i]='t';
            }
            if(s1[i]=='G' || s1[i]=='B'){
                s1[i]='t';
            }
        }

       if(s==s1) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    
    return 0;
}
