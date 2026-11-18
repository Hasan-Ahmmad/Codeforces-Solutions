#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n; cin>>n;
        int sum1=0, sum2=0;
        for(int i=0; i<n;i++){
            int a; cin>>a;
            if(a%2==0) sum1+=a;
            else sum2+=a;
        }
        if(sum1>sum2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    
    }
    return 0;
}
