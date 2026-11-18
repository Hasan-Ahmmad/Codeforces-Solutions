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
        int Max=INT_MIN;
        for(int i=0;i<n;i++){ 
            cin>>a[i];
            if(a[i]>Max) Max=a[i];
        } 
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]==Max){
                count++;
            }
        }
        cout<<count<<endl;
    } 
    return 0;
}
