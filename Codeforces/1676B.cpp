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
        int a[n];
        int mn=INT_MAX;
        int sum=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]<mn){
                mn=a[i];
            }
        }

        cout<<sum-mn*n<<endl;
    }
    
    return 0;
}
