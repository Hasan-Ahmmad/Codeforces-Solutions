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
        int c1=0, c2=0;
        for(int i=0; i<n; i++){
            int c; cin>>c;
            (c==1) ? c1++ : c2++;
        }

        int sum= c1 + 2*c2;

        if(sum%2 !=0) cout<<"NO"<<endl;
        else if((sum/2)%2==1 && c1==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
