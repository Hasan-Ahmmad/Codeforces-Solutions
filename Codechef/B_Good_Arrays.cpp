#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n;
        cin>>n;

    
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int cnt1 = 0;
        ll sum = 0;
        for(int i=0; i<n; i++){
            if(v[i] == 1){
                cnt1++;
            }
            else{
                sum += (v[i]-1);
            }
        }

        if(sum>=cnt1 && n>=2){
            cout << "YES" <<endl;
        }
        else{
            cout<< "NO" <<endl;
        }
    
    }
    return 0;
}