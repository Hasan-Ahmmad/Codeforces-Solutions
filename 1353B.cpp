#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){

        int n,k; cin>>n>>k;
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(), greater<int>());
 
        for(int i=0, j=0; i<k && j<k; i++,j++){
            if(a[i]<b[j]){
                swap(a[i],b[j]);
            }
        }

        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }

        cout<<sum<<endl;
    }
    
    return 0;
}
