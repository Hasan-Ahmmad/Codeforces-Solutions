#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m; cin>>n>>m;
    bool flag=false;
    for(int i=0;i<n*m;i++)
    {
        char ch; cin>>ch;
        if(ch=='C'|| ch=='M' || ch=='Y')
        {
            flag=true;
        }
    }

    if(flag) cout<<"#Color"<<endl;
    else cout<<"#Black&White"<<endl;
    
    return 0;
}
