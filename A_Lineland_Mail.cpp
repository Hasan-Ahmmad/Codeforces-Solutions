#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    vector<int> vec(n);
    for(int &i : vec){
        cin>>i;
    }

    int Max = vec.back();
    int Min = vec[0];

    cout<<vec[1] - Min<<" "<<Max - Min<<endl;

    for(int i=1; i<n-1; i++){
        cout<<min(vec[i]-vec[i-1], vec[i+1]-vec[i])<<" ";
        cout<<max(Max-vec[i], vec[i]- Min)<<endl;
    }
    cout<<Max-vec[n-2]<<" "<<Max-Min<<endl;

    return 0;
}