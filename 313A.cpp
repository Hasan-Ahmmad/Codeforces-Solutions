#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;

    if(n>=0){
        cout<<n<<endl;
    }
    else{
        cout<<max(n/10,(n/100)*10 + n%10)<<endl;
    }

    return 0;
}
