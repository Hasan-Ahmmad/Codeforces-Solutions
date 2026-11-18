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
        int s1,s2,s3,s4; cin>>s1>>s2>>s3>>s4;
        vector<int> vec={s1,s2,s3,s4};
      
        sort(vec.begin(),vec.end());
        int fMax=max(s1,s2);
        int lMax=max(s3,s4);
      
        if(fMax+lMax==vec[2]+vec[3]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
