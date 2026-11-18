#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        char g[8][8];

        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                cin>>g[i][j];
            }
        }

        bool flag = false;
        for(int i=0; i<8; i++){
            bool flag2 = true;
            for(int j=0; j<8; j++){
                if(g[i][j] != 'R'){
                    flag2 = false;
                    break;
                }
            }
            if(flag2){
                flag = true;
                break;
            }
        }

        if(flag){
            cout<<'R'<<endl;
        }
        else cout<<'B'<<endl;
    
    }
    return 0;
}