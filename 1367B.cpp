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
        int odd=0, even=0;
        int ans=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            (a[i]%2==0)? even++ : odd++;
        }
        if(n%2==0){
            if(even!=odd) cout<<-1<<endl;
            else{
                for(int i=0;i<n;i++){
                    if(i%2 != a[i]%2) ans++;
                }
                cout<<ans/2<<endl;
            }
        }
        else{
            if(even-odd !=1) cout<<-1<<endl;
            else{
                for(int i=0;i<n;i++){
                    if(i%2 != a[i]%2) ans++;
                }
                cout<<ans/2<<endl;
            }
        }

    }
    
    return 0;
}
