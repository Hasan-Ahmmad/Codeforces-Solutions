#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    long long a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int ans=1;
    vector<int> vec;
    for(int i=1; i<n; i++){
        if(a[i]>a[i-1]){
            ans++;
            vec.push_back(ans);
        }
        else{
            ans=1;
        }
    }

    if(vec.empty()) cout<<1<<endl;
    else cout<<*max_element(vec.begin(),vec.end())<<endl;

    return 0;
}
