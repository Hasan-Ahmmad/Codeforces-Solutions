#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str1; cin>>str1;
    bool flag=false;
    for(int i=0;i<5;i++)
    {
        string str2; cin>>str2;
        if(str2[0]==str1[0] || str2[1]==str1[1])
        {
            flag=true;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}
