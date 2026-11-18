#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n, a, b;
        cin>>n>>a>>b;

        while(n>0){
            char c = 'a';
            for(int i=0; i<b && n>0; i++){
                cout<< c;
                c++;
                n--;
            }
        }
        cout<<endl;
    
    }
    return 0;
}