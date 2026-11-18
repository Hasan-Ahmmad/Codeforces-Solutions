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
        int h,m; cin>>h>>m;
        cout<<(23-h)*60 + (60-m) <<endl;
    }
    return 0;
}
