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

        int sum = 0;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            sum +=v[i];
        }

        int val1 = INT_MAX;
        int idx = 0;
        for(int i=0; i<n-1; i++){

            int val2 = v[i]+v[i+1];
            
            if((val2/2)<val1){
                val1 = val2/2;
                idx = i;
            }
            val2 -= v[i-1];
            val2 += v[i+1];
        }

        sum += val1;
        sum -= (v[idx]+v[idx+1]);

        cout<< sum <<endl;
    
    }
    return 0;
}