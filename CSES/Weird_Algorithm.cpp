#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin>>n;

    cout<<n<<" ";

    while(n !=1){
        if(n%2 == 0){
            n /=2;
            cout<< n <<" ";
        }
        else{
            n *=3;
            n++;
            cout<< n<<" ";
        }
    }

    return 0;
}