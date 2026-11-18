#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n; cin>>n;
        n=3*n;

        for(int i=1; i<=n; i++){
            cout<<i<<" "<<n-1<<" "<<n<<" ";
            n-=2;
        }
        cout<<endl;
    
    }
    return 0;
}
