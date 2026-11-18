#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int s,n; cin>>s>>n;
    pair<int,int> dragon[n];
    for(int i=0; i<n; i++){
        int x,y; cin>>x>>y;
        dragon[i].first=x;
        dragon[i].second=y;
    }
    sort(dragon,dragon+n);
    for(int i=0;i<n;i++){
        if(s<=dragon[i].first){
            cout<<"NO"<<endl;
            return 0;
        }
        else{
            s+=dragon[i].second;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
