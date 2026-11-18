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
        int xMax=-1001, xMin=1001, yMax=-1001, yMin=1001;
        for(int i=0;i<4;i++)
        {
            int x,y; cin>>x>>y;
            xMax=max(xMax,x);
            xMin=min(xMin,x);
            yMax=max(yMax,y);
            yMin=min(yMin,y);
        }
        
        cout<<(xMax-xMin)*(yMax-yMin)<<endl;
    }
    
    return 0;
}
