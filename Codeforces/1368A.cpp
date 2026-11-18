#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T; cin>>T;
    while(T--)
    {
        int a,b,n; cin>>a>>b>>n;
        int count=0;
        while(true)
        {
            if(a<=b)
            {
                a+=b;
                count++;
                if(a>n)
                {
                    break;
                }
            }
            else
            {
                b+=a;
                count++;
                if(b>n)
                {
                    break;
                }
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}
