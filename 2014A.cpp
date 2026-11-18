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
        int n,k; cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        int count=0, gold=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>=k)
            {
                gold+=a[i];
            }
            if(a[i]==0 && gold>0)
            {
                gold--;
                count++;
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}
