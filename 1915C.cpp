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
        long long sum=0;
        for(int i=0; i<n; i++){
            long long x; cin>>x;
            sum+=x;
        }

        if(sqrt(sum)- round(sqrt(sum)) != 0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    
    }
    return 0;
}
