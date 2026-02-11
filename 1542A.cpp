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
        int n; cin>>n;
        int evenCount=0, oddCount=0;
        for(int i=0;i<2*n;i++)
        {
            int a; cin>>a;
            if(a%2==0) evenCount++;
            else oddCount++;
        }
        if(evenCount==oddCount) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    
    return 0;
}
