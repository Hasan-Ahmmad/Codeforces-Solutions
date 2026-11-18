#include<bits/stdc++.h>
using namespace std;

int main(){

    int k;
    cin>>k;

    vector<int> a(12);
    for(int &i : a){
        cin>>i;
    }

    sort(a.rbegin(), a.rend());

    int len = 0, ans = 0;

    for(int i=0; i<12; i++){
        if(len>=k){
            break;
        }
        else{
            len += a[i];
            ans++;
        }
    }

    if(len>=k){
        cout<<ans<<endl;
    }
    else cout<< -1 <<endl;

}   
