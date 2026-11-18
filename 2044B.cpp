#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        string a; cin>>a;
        for(int i=0; i<a.size(); i++){
            if(a[i]=='p') a[i]='q';
            else if(a[i]=='q') a[i]='p';
        }

        reverse(a.begin(), a.end());

        cout<<a<<endl;
    
    }
    return 0;
}
