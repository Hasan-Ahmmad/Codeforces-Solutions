#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){

        int x; cin>>x;
        // The Ans is
        cout<<x-1<<endl;
      
        // I think it not necessary!!!
        // int idx=0;
        // for(int i=x-1;i>=x/2;i--){
        //     if(gcd(x,i)+i==x){
        //         idx=i;
        //         break;
        //     }
        // }
        // cout<<idx<<endl;
    }
    
    return 0;
}
