#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        if(n%4!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            cout<<"YES"<<endl;
            vector<int> a;
            for(int i=2;i<=n;i+=2)
            {
                a.push_back(i);
            }
            for(int i=1;i<n;i+=2)
            {
                a.push_back(i);
            }
            a[n-1]=a[n-1]+n/2;
            for(int i  : a)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }         
    }  
      return 0;
}
