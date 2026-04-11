#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int a[7];
        for(int i=0; i<7; i++) cin>>a[i];

        sort(a,a+7);

        int sum=0;

        for(int i=0; i<6; i++){
            a[i]=a[i]*(-1);
            sum+=a[i];
        }
        
        cout<<sum+a[6]<<endl;

    
    }
    return 0;
}
