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
        for(int k=0;k<n;k++){ 
            for(int i=0;i<n-1;)
            {
                if(s[i]==s[i+1])
                {
                    s.erase(i,2);
                }
                else i++;
            }
        }
        if(s=="") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    } 
    return 0;
}
