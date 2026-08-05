#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,l; cin>>n>>l;

    vector<double> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    sort(a.begin(), a.end());

    double diff=INT_MIN;
    for(int i=0; i<n-1; i++){
        if(a[i+1] - a[i]>diff){
            diff = a[i+1]-a[i];
        }
    }

    double Mx = max(a[0],l-a.back());

    if(Mx>=diff/2){
        cout<<fixed<<setprecision(10)<< Mx <<endl;
    }
    else cout<<fixed<<setprecision(10)<<double(diff/2) <<endl;

}   