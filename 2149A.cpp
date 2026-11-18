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
        int zeroCount=0, minusCount=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==-1) minusCount++;
            if(a[i]==0) zeroCount++;
        }
        cout<<zeroCount+(minusCount%2)*2<<endl;
    }
    
    return 0;
}
