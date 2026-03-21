#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n; cin>>n;
        vector<int> a(n), b(n);

        for(int &i : a) cin>>i;

        for(int &i : b) cin>>i;

        int min1=*min_element(a.begin(), a.end());
        int min2=*min_element(b.begin(),b.end());

        long long ans=0;

        for(int i=0; i< n; i++){

            ans+=max(a[i]-min1, b[i]-min2);
        }

        cout<<ans<<endl;
    
    }
    return 0;
}
