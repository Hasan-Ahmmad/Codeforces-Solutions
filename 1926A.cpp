#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        sort(s.begin(),s.end());
        cout<<s[2]<<endl;
    }
    return 0;
}
