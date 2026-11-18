#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n; cin>>n;

        int count1=0, count2=0, sum=0;
        for(int i=0; i<n; i++){
            int a; cin>>a;
            sum+=a;
            if(a%2 !=0) count1++;
            else count2++;
        }

        if(sum%2 !=0) cout<<"YES"<<endl;
        else if(count1>=1 && count2>=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
