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
        int n=s.size();
        if((n & 1)==1)
        { 
            cout<<"NO"<<endl; 
            continue;
        }
        string s1=s.substr(0,n/2);
        string s2=s.substr(n/2,n/2);
        if(s1!=s2)
        {
            cout<<"NO"<<endl;
        }
        else cout<< "YES"<<endl;
    }
    return 0;
}
