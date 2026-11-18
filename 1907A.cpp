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
        for(char i='1';i<='8';i++)
        {
            if(i==s[1])
            {
                continue;
            }
            else cout<<s[0]<<i<<endl;
        }
        for(char i='a';i<='h';i++)
        {
            if(i==s[0])
            {
                continue;
            }
            else cout<<i<<s[1]<<endl;
        }
    }  
    return 0;
}
