#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a1,a2,a3,a4; cin>>a1>>a2>>a3>>a4;
    string s; cin>>s;
    int a[4]={0};
    for(int i=0;i<s.size();i++)
    {
        a[s[i]-'1']++;
    }
    int ans=(a1*a[0])+(a2*a[1])+(a3*a[2])+(a4*a[3]);

    cout<<ans<<endl;
    
    return 0;
}
