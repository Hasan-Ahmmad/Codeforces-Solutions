#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x; cin>>x;
    int count=0;
    while(x){
        if(x%2==1){
            count++;
        }
        x/=2;
    }
    cout<<count<<endl;
    return 0;
}
