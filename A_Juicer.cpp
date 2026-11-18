#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, b, d;
    cin>>n>>b>>d;

    vector<int> v(n);
    long long sum = 0;
    int ans = 0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]<=b){
            sum += v[i];
        }

        if(sum>d){
            ans++;
            sum=0;
        }
    }

    cout<< ans <<endl;
    

}   