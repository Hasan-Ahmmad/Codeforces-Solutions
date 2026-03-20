#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n; cin>>n;
        int b[n];

        for(int &i : b) cin>>i;

        for(int i=0, j=n-1; i<=j; i++, j--){
                if(i !=j){ 
                    cout<<b[i]<<" "<<b[j]<<" ";
                }
                else cout<<b[i];    
            }
        cout<<endl;
    
    }
    return 0;
}
