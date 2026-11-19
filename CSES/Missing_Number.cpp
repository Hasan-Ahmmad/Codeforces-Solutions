#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    ll sum =0;
    for(int i=0; i<n-1; i++){

        int x;
        cin>>x;

        sum += x;
    }

    ll val = 1LL * n*(n+1)/2; 

    cout<< val - sum <<endl;


    return 0;
}