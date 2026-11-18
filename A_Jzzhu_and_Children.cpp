#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin>>n>>m;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int Max = INT_MIN, ans = 0;
    for(int i=0; i<n; i++){
        if((v[i]+m-1)/m>=Max){
            Max = (v[i]+m-1)/m;
            ans = i;
        }
    }

    cout<< ans+1 <<endl;

    return 0;
}